#include<iostream>
#include<cstring>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
//Definiendo Comandos Basicos:
#define help "HELP"
#define exit "EXIT"
#define who "WHO"
#define psycho "ALICE"
//Definiendo Comandos ZORK:
#define zork "ZORK"
#define gotomailbox "GO_TO_MAILBOX"
#define openthemailbox "OPEN_THE_MAILBOX"
#define readleaflet "READ_LEAFLET"

using namespace std;

int main(){

    //Variables Principales:
    string user;


    cout<<"$Centrall Intelligence Agency Data System\n\n";
    cout<<"Unauthorized use of this system is against the law\n\n";
    cout<<"Security Privileges Required\n";
    cout<<"USER:amason\n";
    cout<<"PASSWORD:********\n";
    cout<<"$";

    do{
        cin>>user;
//AYUDA
        if(user == help){

            cout<<"System Help:\n\n";
            cout<<"help               displays this help information\n";
            cout<<"cat                prints the contents of a file (.txt,.pic,.snd)\n";
            cout<<"cd [ |.|..|path]   changes the current directory\n";
            cout<<"clear              clear the display\n";
            cout<<"decode             decodes an encrypted string using an agency standart cypher\n";
            cout<<"encode             encodes an strign using an agency standart cypher\n";
            cout<<"exit               exits the current login session\n";
            cout<<"help               display's this help screen\n";
            cout<<"login              starts a new login session on the current system\n";
            cout<<"mail               open the current mail box\n";
            cout<<"rloggin [system]   attemps a login session on a remote system\n";
            cout<<"who                list the users that have accounts on the current system\n\n";

            return main();

        }
//USUARIOS
        if(user == who){

            cout<<"\namason";
            cout<<"\nasmith";
            cout<<"\nbharris";
            cout<<"\ndking";
            cout<<"\nfwoods";
            cout<<"\ngweaver";
            cout<<"\njbowman";
            cout<<"\njfkennedy";
            cout<<"\njhudson";
            cout<<"\njmccone";
            cout<<"\njturner";
            cout<<"\nlbjohnson";
            cout<<"\nrhelms";
            cout<<"\nrjackson";
            cout<<"\nrkain";
            cout<<"\nrnixon";
            cout<<"\ntbrooks";
            cout<<"\ntwalker";
            cout<<"\nvbush";
            cout<<"\nwraborn\n\n";

            return main();
        }
//ALICE
        if(user == psycho){
            while(user != exit){
                cout<<"$";
                cin>>user;
                cout<<"\nTell me more.\n";
            }
            return main();
        }
//ZORK
        if(user == zork){

            cout<<"\nZork I: The Great Underground Empire\n";
            cout<<"Copyright (c) 1981, 1982, 1983 Infocom Inc. All rights reserved.\n";
            cout<<"ZORK is a registered trademark of Infocom, Inc.\n";
            cout<<"Revision 88 / Serial number 840726\n\n";
            cout<<"West of House\n";
            cout<<"You are standing in an open field west of a white house, whit a boarder front door.\n";
            cout<<"There is a small mailbox there.\n\n";
            cout<<">";
            cin>>user;

            if(user == gotomailbox){
                cout<<"\nIt's There!\n\n>";
                cin>>user;
                if(user == openthemailbox){
                    cout<<"\nOpening the small mailbox reveals a leaflet\n\n>";
                    cin>>user;
                    if(user == readleaflet){
                        cout<<"\n(Taken)\n";
                        cout<<"WELCOME TO ZORK!\n\n";
                        cout<<"Zork is a game of adventor, danger and low cunning. Int it you will explore\n";
                        cout<<"some of the most amazing directory ever seen by the mortals. No computer should be\n";
                        cout<<"whitout one!\n\n\n\n";
                        return main();
                    }
                    else{
                        cout<<"\nI don't know that command!\n";
                        cout<<"Closing the game!\n\n";
                        return main();
                    }
                }
                else{
                  cout<<"\nI don't know that command!\n";
                  cout<<"Closing the game!\n\n";
                  return main();  
                }
            }
            else{
                cout<<"\nI don't know that command!\n";
                cout<<"Closing the game!\n\n";
                return main();
            }
        }
//SALIDA
        if(user == exit){
            return 0;
        }
//MENSAJE DE ERROR
        else{
            cout<<"\n Unknow command!\n\n";
            return main();
        }
    }while (user == exit);

    return 0;    
}