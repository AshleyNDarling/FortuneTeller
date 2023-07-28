#include <iostream>
using namespace std;
/*
Ashley Darling
05/01/2023
Fortune Teller Final Project Program

  */
void daisy (int petals){
// THis function is what displays the flower petsl that pairs with the function and for loop of whether the user's partner loves them or not 
  
string flower_6 = " __/  \\__\n/  \\__/  \\\n\\__/..\\__/\n/  \\__/  \\ \n\\__/  \\__/\n   \\__/";
  
  string flower_5 = " __    __\n/  \\__/  \\\n\\__/..\\__/\n/  \\__/  \\ \n\\__/  \\__/\n   \\__/";
  
  string flower_4 = " __      \n/  \\__    \n\\__/..\\__ \n/  \\__/  \\ \n\\__/  \\__/\n   \\__/";
  
  string flower_3 = " __      \n/  \\__    \n\\__/..\\   \n/  \\__/    \n\\__/  \\   \n   \\__/";
  
    string flower_2 = " __      \n/  \\__    \n\\__/..\\   \n/  \\__/    \n\\__/     \n";
  
    string flower_1 = " __      \n/  \\__    \n\\__/..\\   \n   \\__/    \n";
  
      string flower_0 = "         \n    __    \n   /..\\   \n   \\__/    \n";


  cout<<flower_6<<endl;
  cout<<flower_5<<endl;
  cout<<flower_4<<endl;
  cout<<flower_3<<endl;
  cout<<flower_2<<endl;
  cout<<flower_1<<endl;
  cout<<flower_0<<endl;

 
  

  
}

int luckyNumber(string Name){ // This function assigns each letter a number 
  int luckNum = 0;
  char letter; // these two variables represent the variables fro each letter as well as the incremnt of the number

  // this for loops iterates through the length of the name of the user or the users parter they inputted
  for( int i = 0; i < Name.length(); i++) {
    letter = Name[i];

    // this if-else statement branch assigns each letter a number (whether capital or lowercase)
    if (letter == 'a' || letter == 'j' || letter == 's' || 
      letter == 'A' || letter == 'J' || letter == 'S'){
         luckNum += 1;   
    }
    else if(letter == 'b' || letter == 'k' || letter == 't'
          || letter == 'B' || letter == 'K' || letter == 'T'){
      luckNum += 2;
    }
    else if ( letter == 'c' || letter == 'l' || letter == 'u'
      || letter == 'C' || letter == 'L' || letter == 'U'){
      luckNum += 3;
    }
    else if ( letter == 'd' || letter == 'm' || letter == 'v'
      || letter == 'D' || letter == 'M'|| letter == 'V'){
      luckNum += 4;
    }
    else if ( letter == 'e' || letter == 'n' || letter == 'w'
      || letter == 'E' || letter == 'N' || letter == 'W'){
      luckNum += 5;
    }
    else if( letter == 'f' || letter == 'o' || letter == 'x'
      || letter == 'F' || letter == 'O' || letter == 'X'){
      luckNum += 6;
    }
    else if(letter == 'g' || letter == 'p' || letter == 'y' 
      || letter == 'G' || letter == 'P' || letter == 'Y'){
      luckNum += 7;
    }
    else if(letter == 'h' || letter == 'q' || letter == 'z'
      || letter == 'H'|| letter == 'Q' || letter == 'Z'){
      luckNum += 8;
    }
    else if( letter == 'i'|| letter == 'r' 
      || letter == 'I' || letter == 'R'){
      luckNum += 9;
    }
    
  }
  


    //while loop to add the digits of sum in the case that it is greater than 10 
    // > 10 because luck numbers are 1-10
  while(luckNum > 10){
    luckNum = luckNum / 10 + luckNum%10;
  }
  return luckNum;
}

// This functiomn provides the welcome and selection options that tells the user what their personaltiy type is and what the chemsitry between their partner n them
void welcome(){
  cout << "Welcome to the Mystical Fortune Teller Program ~" << endl;
  cout << " ----------------------------------------------  " << endl;
  cout << "This program will provide you an analysis of"<< endl << "your personality, your fortune, as well as tips"<< endl <<  "moving forward ~ " << endl;
  cout << "  " << endl; 
  cout<< "This program will also tell you about you"<< endl << "and your lovers destiny as well whether yall" << endl << "are a matchmade in heaven or not...(Fingers Crossed!) ~" << endl; // describe program and what each seletction does

  cout << "  " << endl;

    
}

void Menu(){
    cout << " Menu " << endl;
  cout << " ---------------------------------------------- " << endl;
// this is the the option the menu provides
  cout << " Choose a mighty mystical or mischevious option !" << endl;
  cout << " 1) Tells your Fortune & personality description" << endl;
  cout << " 2) Measurement of how much your partner loves you" << endl;
  cout << " 3) To Quit the program." << endl;
  // this is the display menu of options for the user to make a choice on whether or not they want to interact with the fortune
}

void tips (int luck){
  // this function provides a list of designated tips orvided to the user for what they can do in regards to their personailty type, lucky number, and fortune
// An array of the different tips attached to the designated lucky number the user receives
string tips[10] = {"You should seek hiking as a hobby!",
  "You should take on meditation as a hobby! ",
  "You should take on a form of dancing as your hobby!",
  "You should become more involved in community service more!", 
  "Perhaps travel more this year! Visit a country across the world as a start!", 
  "You should take on yoga as a hobby!",
  "Perhaps you read situations faster than others. Trust your intuition more often!! ", 
  "You should take on strength training as a hobby!", 
  "You should become more involved in community service more!",
  "You should take on painting as your ideal hobby! Make your fantasy, a reality!"};
  cout << "With your personality...";
  cout << tips[luck - 1];
  
}
void personality (int luck){ // this  function holds the array of personality types attached to the designated lucky number the user receives after inputting their name into the proragm
  string arr[10] = {"Pioneering, leading, independent, attaining, individualistic.", 
  
  "Cooperation, adaptability, considering, partnering, mediating", 
  
  "expression, verbalization, socialization, arts, the joy of living",
  
  "values foundation, service, struggle against limits steady growth", 
  
  "expansiveness visionary, adventure, constructive use freedom",
  
  "Responsibility, protection, nurturing, balance", 
  
  "analysis, understanding, awareness, studious, meditating",
  
  "practice endeavors, status oriented, power-seeking, high-material goals", 
  
  "humanitarian, giving, selfless, obligations, creative expression",
  
  "higher spiritual plane, intuitive illumination, idealist, a dreamer"};
  
  cout << "Your personality type is ";
  cout << arr[luck - 1] << endl;
  

  
}
void print_fortune(int luck) {
  string fortunes[10] = {
    "Your lucky number indicates that good fortune is on the horizon. Expect some positive changes in your life soon!",
  
    "You have a strong and determined personality, and your lucky number reflects that. Keep pushing forward and pursuing your dreams.",
  
    "Your lucky number indicates that you have a sensitive and compassionate nature. Use this to connect with others and make a positive impact in the world.",
  
    "You are a creative and imaginative person, and your lucky number reflects this. Let your creativity guide you and you will find success.",
  
    "Your lucky number suggests that you have a sharp mind and a knack for problem-solving. Trust your instincts and don't be afraid to take risks.",
  
    "You are a calm and patient person, and your lucky number reflects this. Take time to enjoy the present moment and appreciate the beauty around you.",
  
    "Your lucky number suggests that you have a magnetic and charming personality. Use this to your advantage and forge strong connections with others.",
  
    "You have a powerful and influential presence, and your lucky number reflects this. Use your strengths to make a positive impact in your community.",

    "Your lucky number indicates that you have a strong sense of purpose and a clear direction in life. Stay focused on your goals and you will achieve them.",
    
    "You are a compassionate and empathetic person, and your lucky number reflects this. Use your empathy to connect with others and make a difference in their lives."
  
};

  cout << "Your fortune is: " << fortunes[luck - 1] << endl;
}


void partner_name(string name) {
  int luck = luckyNumber(name); // This function holds the the for loop of whether or not the users partner loves them or not 
  
  bool loves_me = true;
  if(luck % 2){
    loves_me = false;
  }
  luck = 6;
  for(int i = 0; i < luck; i++){
      if (loves_me == true) {      
// this if else - loop statement tackes the lucky number of the partnrs name and does "number % 2" to decipher  through whether the partner loves the, or not
        cout << "Loves Me, " << endl;
        daisy(luck - 1);
        loves_me = false;
      }
      else if (loves_me == false){
        cout << "Loves Me Not, " << endl;
        daisy(luck - 1);
        loves_me = true;
      }
    else {
      break;
    }
  }
        loves_me = !loves_me;

  cout << "Final Result: " << endl;
  if(loves_me) {
    cout << "Loves Me Not" << endl;
  } else {
    cout << "Loves Me" << endl;
  } // print out the final statement of whether the partner loves the user or not 
  if(loves_me == false){
    cout << "HIP HIP HOORAY! YALL SHALL BE MARRIED IN THE MORNING!" << endl;
    
  }
  else if (loves_me == true){
 cout <<    "Err.. you guys are totally not compatible!" << endl;
  }
}


int main() {
  welcome();
//welcome user
//while loops
  // get users name
  // get users partners name
  // calculate their lucky number

int choice;
string name1;

 // these variables store the users number choices as well as the names of either just the user and or the partner of user.
  
int luck;//  stores a variables
int luck2;
int totalLuck;
while(choice != 3){ // This program presents the user with what choiches they made. This loop iterates through as many times the user wants to use
  
  Menu();
  
  cout << "Choose your fortune: ";
  cin >> choice;

  if( choice == 1){ // This allows the user to actually interact with the program of entering their name, their partners name, or just quitting the program
    cout << "Enter Name: ";
    cin >> name1;

    luck = luckyNumber(name1);

    cout << "Your lucky number is " << luck << endl;
    personality(luck);
    cout << endl;

    print_fortune(luck);
    cout << endl;

    tips(luck);
    cout << endl;
                                        // this if else branch if the designated pathways of choices the user can make regarding the fortune teller program
    }
    

  else if(choice == 2){
      cout << "Enter your partner's full name: " << endl;
    
    cin >> name1;

    partner_name(name1);
    cout << "!" << endl;
  }
    else if(choice == 3){
      cout << "You are always welcome back to play the mystical fortune teller game...~ " << endl;
      
    
      
     break;
  
  }
    
  else {
   cout << "Inavlid Choice... Please try again!" << endl;

    continue;
  }
    }

  return 0;
  }
 
    





