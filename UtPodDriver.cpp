#include <cstdlib>
#include <iostream>
#include "song.h"
#include "UtPod.h"


using namespace std;


int main()
{

   int mem=256;
   UtPod t;
  // UtPod t(mem);


   cout<<endl;
   cout<< "Here I'll test the functionality of storage of the UtPod..."<<endl;
   Song s6;  // A song that isn't in the storage to test the remove song method. 
   Song s1("Beatles", "Hey Jude1", 5);
   int result = t.addSong(s1);
   cout << "result = " << result << endl;

   Song s2("Beatles", "Hey Jude2", 4);
   result = t.addSong(s2);
   cout << "result = " << result << endl;

   Song s4("Beatles", "Hey Jude4", 7);
   result = t.addSong(s4);
   cout << "result = " << result << endl;

   Song s5("Beatles", "Hey Jude5", 500);
   result = t.addSong(s5);
   cout << "result = " << result << endl;
   t.showSongList();
   
   cout<<endl;
   cout<<"Here I'll test the total memory and remaining memory methods..."<<endl;
   cout << "Total Memory = "<<t.getTotalMemory() << "MB"<< endl;
   cout << "Memory Left = "<<t.getRemainingMemory() << "MB"<<endl;

   
   cout<<endl;
   cout<<"Here I'll test the shuffle method..." <<endl;
   t.shuffle();
   t.showSongList();

   cout<<endl;
   cout<<"Here I'll test the sort method..."<<endl;
   t.sortSongList();
   t.showSongList();

   cout<<endl;
   cout<<"Here I'll test the shuffle method...Again!" <<endl;
   t.shuffle();
   t.showSongList();

   cout<<endl;
   cout<<"Here I'll test the clear memory method..."<<endl;
   t.clearMemory();
   t.showSongList();
   cout << "Memory Left = "<<t.getRemainingMemory() << "MB"<<endl;




   cout<<endl;
   cout<< "Here I'll test the functionality of storage of the UtPod...Again"<<endl;
   result = t.addSong(s1);
   cout << "result = " << result << endl;
   result = t.addSong(s2);
   cout << "result = " << result << endl;
   result = t.addSong(s4);
   cout << "result = " << result << endl;
   result = t.addSong(s5);
   cout << "result = " << result << endl;
   t.showSongList();


   cout<<endl;
   cout<< "Here I'll test the functionality of remove song method of the UtPod by removing two songs..."<<endl;
   result = t.removeSong(s5);
   cout << "delete result = " << result << endl;
   result = t.removeSong(s1);
   cout << "delete result = " << result << endl;
   t.showSongList();

   cout<<endl;
   cout<< "Here I'll test the functionality of remove song method of the UtPod by removing another song..."<<endl;
   result = t.removeSong(s4);
   cout << "delete result = " << result << endl;
   t.showSongList();
  

   cout<<endl;
   cout<< "Here I'll test the functionality of remove song method of the UtPod by removing another song that doesn't exist in the Utpod..."<<endl;
   result = t.removeSong(s6);
   cout << "delete result = " << result << endl;
   t.showSongList();
 
   cout<<endl;
   cout<<"Here I'll test the clear memory method again..."<<endl;
   t.clearMemory();
   t.showSongList();
   cout << "Memory Left = "<<t.getRemainingMemory() << "MB"<<endl;



   cout<<endl;
   cout<< "Here I'll test the functionality of storage of the UtPod again with different songs..."<<endl;
   Song s7("Ceatles", "Hey Jude1", 5);
   result = t.addSong(s7);
   cout << "result = " << result << endl;

   Song s8("Deatles", "Hey Jude2", 4);
   result = t.addSong(s8);
   cout << "result = " << result << endl;

   Song s9("Aeatles", "Hey Jude4", 7);
   result = t.addSong(s9);
   cout << "result = " << result << endl;

   Song s10("Beatles", "Hey Jude5", 150);
   result = t.addSong(s10);
   cout << "result = " << result << endl;
   t.showSongList();



   cout<<endl;
   cout<<"Here I'll test the shuffle method again for the different songs..." <<endl;
   t.shuffle();
   t.showSongList();


   cout<<endl;
   cout<<"Here I'll test the sort method again for the different songs..."<<endl;
   t.sortSongList();
   t.showSongList();


   cout<<endl;
   cout<<"Here I'll test the shuffle method again for the different songs..." <<endl;
   t.shuffle();
   t.showSongList();

   cout<<endl;
   cout<<"Here I'll test the clear memory method again for the different songs..."<<endl;
   t.clearMemory();
   t.showSongList();
   cout << "Memory Left = "<<t.getRemainingMemory() << "MB"<<endl;



   cout<<endl;
   cout<< "Here I'll test the functionality of storage of the UtPod again with different songs..."<<endl;
   Song s11("Beatles", "Hey Jude1", 5);
   result = t.addSong(s11);
   cout << "result = " << result << endl;

   Song s12("Beatles", "Hey Jude1", 4);
   result = t.addSong(s12);
   cout << "result = " << result << endl;

   Song s13("Beatles", "Hey Jude1", 3);
   result = t.addSong(s13);
   cout << "result = " << result << endl;

   Song s14("Beatles", "Hey Jude1", 150);
   result = t.addSong(s14);
   cout << "result = " << result << endl;
   t.showSongList();


   cout<<endl;
   cout<<"Here I'll test the shuffle method again for the different songs..." <<endl;
   t.shuffle();
   t.showSongList();


   cout<<endl;
   cout<<"Here I'll test the sort method again for the different songs..."<<endl;
   t.sortSongList();
   t.showSongList();


   cout<<endl;
   cout<<"Here I'll test the shuffle method again for the different songs..." <<endl;
   t.shuffle();
   t.showSongList();


   cout<<endl;
   cout<<"Here I'll test the clear memory method again for the different songs..."<<endl;
   t.clearMemory();
   t.showSongList();
   cout << "Memory Left = "<<t.getRemainingMemory() << "MB"<<endl;


}
