/*
morse translator
Sett Sarverott @ 2021
*/

#include <iostream>


#define LOGO0 "        ___  ___"
#define LOGO1 "        |  \\/  |"
#define LOGO2 "        | .  . | ___  _ __ ___  ___"
#define LOGO3 "        | |\\/| |/ _ \\| '__/ __|/ _ \\"
#define LOGO4 "        | |  | | (_) | |  \\__ \\  __/"
#define LOGO5 "        \\_|  |_/\\___/|_|  |___/\\___|"
#define LOGO6 " _____                   _       _"
#define LOGO7 "|_   _|                 | |     | |"
#define LOGO8 "  | |_ __ __ _ _ __  ___| | __ _| |_ ___  _ __"
#define LOGO9 "  | | '__/ _` | '_ \\/ __| |/ _` | __/ _ \\| '__|"
#define LOGO10 "  | | | | (_| | | | \\__ \\ | (_| | || (_) | |"
#define LOGO11 "  \\_/_|  \\__,_|_| |_|___/_|\\__,_|\\__\\___/|_|"



//#define MTPLL_0 "         █▀▄▀█ █▀█ █▀█ █▀ █▀▀"
//#define MTPLL_1 "         █░▀░█ █▄█ █▀▄ ▄█ ██▄"

//#define MTPLL_2 "▀█▀ █▀█ ▄▀█ █▄░█ █▀ █░░ ▄▀█ ▀█▀ █▀█ █▀█"
//#define MTPLL_3 "░█░ █▀▄ █▀█ █░▀█ ▄█ █▄▄ █▀█ ░█░ █▄█ █▀▄"

#define MORSE_LONG 1000,300
#define MORSE_SHORT 300,300
#define MORSE_CHAR_PAUSE 1000

//MORSE ALFABET

#define MORSE_A false,true //morse .-
#define MORSE_B true,false,false,false //morse -...
#define MORSE_C true,false,true,false //morse -.-.
#define MORSE_D true,false,false //morse -..
#define MORSE_E false //morse .
#define MORSE_F false,false,true,false //morse ..-.
#define MORSE_G true,true,false //morse ...
#define MORSE_H false,false,false,false //morse ....
#define MORSE_I false,false //morse ..
#define MORSE_J false,true,true,true //morse .---
#define MORSE_K true,false,true //morse -.-
#define MORSE_L false,true,false,false //morse .-..
#define MORSE_M true,true //morse --
#define MORSE_N true,false //morse -.
#define MORSE_O true,true,true //morse ---
#define MORSE_P false,true,true,false //morse .--.
#define MORSE_Q true,true,false,true //morse --.-
#define MORSE_R false,true,false //morse .-.
#define MORSE_S false,false,false //morse ...
#define MORSE_T true //morse -
#define MORSE_U false,false,true //morse ..-
#define MORSE_V false,false,false,true //morse ...-
#define MORSE_W false,true,true //morse .--
#define MORSE_X true,false,false,true //morse -..-
#define MORSE_Y true,false,true,true //morse -.--
#define MORSE_Z true,true,false,false //morse --..
#define MORSE_0 true,true,true,true,true //morse -----
#define MORSE_1 false,true,true,true,true //morse .----
#define MORSE_2 false,false,true,true,true //morse ..---
#define MORSE_3 false,false,false,true,true //morse ...--
#define MORSE_4 false,false,false,false,true //morse ....-
#define MORSE_5 false,false,false,false,false //morse .....
#define MORSE_6 true,false,false,false,false //morse -....
#define MORSE_7 true,true,false,false,false //morse --...
#define MORSE_8 true,true,true,false,false //morse ---..
#define MORSE_9 true,true,true,true,false //morse ----.

using namespace std;


/*
LETTERS IN MORSE CODE
A = .-
B = -...
C = -.-.
D = -..
E = .
F = ..-.
G = --.
H = ....
I = ..
J = .---
K = -.-
L = .-..
M = --
N = -.
O = ---
P = .--.
Q = --.-
R = .-.
S = ...
T = -
U = ..-
V = ...-
W = .--
X = -..-
Y = -.--
Z = --..
0 = -----
1 = .----
2 = ..---
3 = ...--
4 = ....-
5 = .....
6 = -....
7 = --...
8 = ---..
9 = ----.
*/

//void blinkSignal(int onTime, int offTime){
//  digitalWrite(LED_BUILTIN, ON_SIGNAL);
//  delay(onTime);
//  digitalWrite(LED_BUILTIN, OFF_SIGNAL);
//  delay(offTime);
//}

void morseLetter(bool signal0){
  if(signal0){
  	cout<<'-';
//    blinkSignal(MORSE_LONG);
  }else{
  	cout<<'.';
//    blinkSignal(MORSE_SHORT);
  }
}
void morseLetter(
  bool signal0,
  bool signal1
){
  morseLetter(signal0);
  morseLetter(signal1);
}
void morseLetter(
  bool signal0,
  bool signal1,
  bool signal2
){
  morseLetter(signal0,signal1);
  morseLetter(signal2);
}
void morseLetter(
  bool signal0,
  bool signal1,
  bool signal2,
  bool signal3
){
  morseLetter(signal0,signal1,signal2);
  morseLetter(signal3);
}
void morseLetter(
  bool signal0,
  bool signal1,
  bool signal2,
  bool signal3,
  bool signal4
){
  morseLetter(signal0,signal1,signal2,signal3);
  morseLetter(signal4);
}

void letterMorse(){

}

void charToMorse(char inputChar){
	switch(inputChar){
		case 'a':case 'A':morseLetter(MORSE_A);break;
		case 'b':case 'B':morseLetter(MORSE_B);break;
		case 'c':case 'C':morseLetter(MORSE_C);break;
		case 'd':case 'D':morseLetter(MORSE_D);break;
		case 'e':case 'E':morseLetter(MORSE_E);break;
		case 'f':case 'F':morseLetter(MORSE_F);break;
		case 'g':case 'G':morseLetter(MORSE_G);break;
		case 'h':case 'H':morseLetter(MORSE_H);break;
		case 'i':case 'I':morseLetter(MORSE_I);break;
		case 'j':case 'J':morseLetter(MORSE_J);break;
		case 'k':case 'K':morseLetter(MORSE_K);break;
		case 'l':case 'L':morseLetter(MORSE_L);break;
		case 'm':case 'M':morseLetter(MORSE_M);break;
		case 'n':case 'N':morseLetter(MORSE_N);break;
		case 'o':case 'O':morseLetter(MORSE_O);break;
		case 'p':case 'P':morseLetter(MORSE_P);break;
		case 'q':case 'Q':morseLetter(MORSE_Q);break;
		case 'r':case 'R':morseLetter(MORSE_R);break;
		case 's':case 'S':morseLetter(MORSE_S);break;
		case 't':case 'T':morseLetter(MORSE_T);break;
		case 'u':case 'U':morseLetter(MORSE_U);break;
		case 'v':case 'V':morseLetter(MORSE_V);break;
		case 'w':case 'W':morseLetter(MORSE_W);break;
		case 'x':case 'X':morseLetter(MORSE_X);break;
		case 'y':case 'Y':morseLetter(MORSE_Y);break;
		case 'z':case 'Z':morseLetter(MORSE_Z);break;

		case '0':morseLetter(MORSE_0);break;
		case '1':morseLetter(MORSE_1);break;
		case '2':morseLetter(MORSE_2);break;
		case '3':morseLetter(MORSE_3);break;
		case '4':morseLetter(MORSE_4);break;
		case '5':morseLetter(MORSE_5);break;
		case '6':morseLetter(MORSE_6);break;
		case '7':morseLetter(MORSE_7);break;
		case '8':morseLetter(MORSE_8);break;
		case '9':morseLetter(MORSE_9);break;
    case ' ':cout<<"\\";break;
    case '.':case '\n':cout<<"\\\\\\";break;
	}
}

bool asciiToMorse(){
  char r;
  r=cin.get();
  charToMorse(r);
  return r!='.';
  //cout<<"\\\\\\";
}

bool morseToAscii(){
  cout<<"WARNING!!! currently not supported :(\n";
  throw "NON_SUPPORT";
  return 'n'=='\\';
}

void menuInterfacePrint(bool aToMMod){
  cout<<'\n'<<LOGO0<<'\n'<<LOGO1<<"\n"<<LOGO2<<'\n'<<LOGO3<<'\n'
      <<LOGO4<<'\n'<<LOGO5<<"\n"<<LOGO6<<'\n'<<LOGO7<<'\n'
      <<LOGO8<<'\n'<<LOGO9<<"\n"<<LOGO10<<'\n'<<LOGO11<<'\n';
  cout<<"magic tool to translate letters and ciphers to dots and dashes\n";
  cout<<"   Sett Sarverott @ 2021\n\n";
  cout<<"current mode: ";
  if(aToMMod) cout<<"ASCII to Morse";
  else cout<<"Morse to ASCII";
  cout<<"\n\nCOMMANDS:\n";
  cout<<"  M - switch mode\n";
  cout<<"  E - translate input\n";
  cout<<"  X - exit programm\n\n";
  cout<<"~#> ";
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv){
  bool standardInputOutput=false;
  bool asciiToMorseMode=true;
  bool menuInterface=true;
  for(int i=0;i<argc;i++){
    if(argv[i]=="--standard-input-output"){
      standardInputOutput=true;
      menuInterface=false;
    }else if(argv[i]=="--menu"){
      standardInputOutput=false;
      menuInterface=true;
    }else if(argv[i]=="--morse-to-ascii"){
      asciiToMorseMode=false;
    }else if(argv[i]=="--ascii-to-morse"){
      asciiToMorseMode=true;
      //default
    }
  }
  while(menuInterface){
    menuInterfacePrint(asciiToMorseMode);
    char r;
    cin>>r;
    bool continueInput=false;
    switch(r){
      case 'm':case 'M':
        asciiToMorseMode=!asciiToMorseMode;
        break;
      case 'e':case 'E':
        cout<<"\nwrite \".\" to end input\n";
        do{
          if(asciiToMorseMode){
            continueInput=asciiToMorse();
          }else{
            continueInput=morseToAscii();
          }
        }while(continueInput);
        break;
      case 'x':case 'X':
        cout<<"\n~~BYE BYE~~\n";
        menuInterface=false;
        standardInputOutput=false;
        break;
    }
  }
	while(standardInputOutput){
    if(asciiToMorse){
      asciiToMorse();
    }else{
      morseToAscii();
    }
	}
	return 0;
}
