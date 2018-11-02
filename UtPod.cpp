#include <iostream>
#include "UtPod.h"
#include "song.h"
#include <string>
#include <ctime>
#include <cstdlib>


UtPod::UtPod() {
   memSize=MAX_MEMORY;
   head=NULL;
   unsigned int currentTime = (unsigned)time(0);
   srand(currentTime);

}





UtPod::UtPod(int size){
    if (size>MAX_MEMORY || size <0 || size==0){
        memSize=MAX_MEMORY; }
    else memSize=size;
    unsigned int currentTime = (unsigned)time(0);
    srand(currentTime);

}




int UtPod::addSong(Song const &s) {
    if (memSize>0 && s.getMem()<getRemainingMemory()){
        if (head==NULL){
            SongNode *temp=new SongNode;
            temp->next=NULL;
            temp->s=s;
            head=temp;
            tail=temp;
        }
        else {
            SongNode *temp=new SongNode;
            temp->next=NULL;
            temp->s=s;
            tail->next=temp;
            tail=temp;
        }
        return SUCCESS;
    }
    return NO_MEMORY;

}





void UtPod::showSongList() {
    SongNode *temp=head;
    while (temp !=NULL){
        cout<<endl;
        cout << temp->s.getName()<< endl;
        cout << temp->s.getTitle()<<endl;
        cout << temp->s.getMem() <<endl;
        cout<<endl;
        temp=temp->next;

    }

}




int UtPod::getRemainingMemory() {
    int remainder=0;
    SongNode* temp=head;
    while(temp!=NULL){
        remainder+=temp->s.getMem();
        temp=temp->next;
    }
   remainder=memSize-remainder;
    return remainder;
}




int UtPod::removeSong(Song const &s) {
    SongNode *current=head;
    SongNode *trail=head;
    SongNode *del=NULL;
    Song data=current->s;

    while((current!=NULL) && (!(current->s==s))){
        trail=current;
        current=current->next;
    }

    if (current==NULL) {
        return NOT_FOUND;
    }
    else {
        del=current;
        current=current->next;
        trail->next= current;
        if (del == head){
            head=head->next;
            trail=NULL; }
        delete del;
        return SUCCESS;
    }

}





void UtPod::clearMemory(){
    while (head !=NULL){
        SongNode *temp=head;
        head=head->next;
        delete temp;
    }
        delete head;
}





void UtPod::shuffle() {
    int numSongs=0;
    SongNode *temp=head;

    while (temp !=NULL){
       numSongs++;
       temp=temp->next;
    }
    if (numSongs < 2) {
        return;
    }

 
    for (int k=0; k<numSongs;k++) {
        long song1 = (rand() % numSongs) + 1;
        long song2 = (rand() % numSongs) + 1;

        temp = head;
        SongNode *temp2 = head;

        for (int i = 1; i < song1; i++) {
            temp = temp->next;
        }
        for (int j = 1; j < song2; j++) {
            temp2 = temp2->next;
        }

        Song temp3 = temp->s;
        Song temp4 = temp2->s;
        temp->s = temp4;
        temp2->s = temp3;
    }
}






void UtPod::sortSongList() {

    for(SongNode *i=head ; i!=NULL && i->next!=NULL; i=i->next) {

        SongNode *Small;
        Small=i;

    for(SongNode *j=i->next; j!=NULL ; j=j->next){

        if(j->s < Small->s){
           Small=j;
        }
    }

        if(Small!=i){
           Song temp;
           temp = Small->s;
           Small->s = i->s;
           i->s = temp;
        }
    }
}





UtPod::~UtPod() {
    clearMemory();
}