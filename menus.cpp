#include <iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include <windows.h>
#include "menus.h"
#include"date.h"
using namespace std;
void gotoxy(int x=0,int y=0)
{
HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
COORD newc={x,y};
SetConsoleCursorPosition(out,newc);
}
void sig(){

cout<<"\n\t\t,---.                                 |";
cout<<"\n\t\t|---|,---.,---.,---.,---.,---.    ,---|,---.    ,---.,---.,---.,---.,---.,---.";
cout<<"\n\t\t|   ||   ||---'|   ||    |---'    |   ||---'    |   ||    |---'`---.`---.|---'";
cout<<"\n\t\t`   '`---|`---'`   '`---'`---'    `---'`---'    |---'`    `---'`---'`---'`---'";
cout<<"\n\t\t     `---'                                      |   ";

}
void intro()
{
	system("cls");
	sig();
    gotoxy(35,20);
    cout<<"\n\nREALISE PAR : OUMAYMA REDISSI - CHAIMA MEZGAR";
	cout<<"\n\nECOLE NATIONALE D'INGENIEUR DE CARTHAGE";
    cout<<"\n\n2020- 2021";

	getch();
}

void menu_sujet()
{
    system("cls");
    sig();
    date d1(1,1,2010);
    date d2;
	int ch2;
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\t\t***********************Gestion des sujets d'actualité*************************";
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\n\n\t1.Ajouter un sujet d'actualité";
    cout<<"\n\n\t2.Lister tous les sujets d'actualité";
    cout<<"\n\n\t3.Rechercher un sujet";
    cout<<"\n\n\t4.Menu principal";
    cout<<"\n\n\tEntrez votre choix (1-4): ";
    cin>>ch2;
        	switch(ch2){
            case 1:
                    cout << "d1 is " << d1 << "\nd2 is " << d2;
                    break;
		  	case 2:;
                break;
		  	case 3:menu_sujet_recherche();
                break;
            case 4:menu_principal();
                break;
		  	default :cout<<"\a";
		}
}
void menu_sujet_recherche()
{
	system("cls");
	sig();
	int ch2;

    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\t\t****************Rechercher sujet d'actualité**********************************";
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\n\n";
    cout<<"\n\t\tSaisir le titre du sujet";
    cout<<"\n\n\t1.Supprimer sujet";
    cout<<"\n\n\t2.Mettre à jour sujet";
    cout<<"\n\n\t3.Vendre aux média";
    cout<<"\n\n\t4.Retourner";
    cout<<"\n\n\tEnterez votre choix (1-4): ";
        cin>>ch2;

    	switch(ch2){
			case 1:;
                break;
		  	case 2:;
                break;
		  	case 3:
                break;
		  	case 4:menu_sujet();
                break;
		  	default :cout<<"\a";
		}

}
void menu_journaliste()
{
	system("cls");
	sig();
	int ch2;

    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\t\t********************Gestion des journalistes**********************************";
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\n\n\t1.Ajouter journaliste";
    cout<<"\n\n\t2.Lister tous les journalistes";
    cout<<"\n\n\t3.Rechercher journaliste";
    cout<<"\n\n\t4.Menu principal";
    cout<<"\n\n\tEntrez votre choix (1-4): ";
    cin>>ch2;

        	switch(ch2){
			case 1:;
                break;
		  	case 2:;
                break;
		  	case 3:menu_journaliste_recherche();
                break;
            case 4:menu_principal();
                break;
		  	default :cout<<"\a";
		}

}
void menu_journaliste_recherche()
{
	system("cls");
	sig();
	int ch2;

    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\t\t************************Rechercher Journaliste********************************";
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\n\n";
    cout<<"\n\t\tSaisir l'identifiant du journaliste";
    cout<<"\n\n\t1.Supprimer journaliste";
    cout<<"\n\n\t2.Mettre à jour journaliste";
    cout<<"\n\n\t3.Retourner";
    cout<<"\n\n\tEnterez votre choix (1-3): ";
    cin>>ch2;
    	switch(ch2){
			case 1:;
                break;
		  	case 2:;
                break;
		  	case 3:menu_journaliste();
                break;
		  	default :cout<<"\a";
		}

}
void menu_media()
{
	system("cls");
	sig();
	int ch2;
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\t\t*************************Gestion des Médias***********************************";
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\n\n\n\n\n\n";
    cout<<"\n\n\t1.Ajouter média";
    cout<<"\n\n\t2.Lister médias";
    cout<<"\n\n\t3.Rechercher média";
    cout<<"\n\n\t4.Menu principal";
    cout<<"\n\n\tEntrez votre choix (1-4): ";
    cin>>ch2;
        	switch(ch2){
			case 1:;
                break;
		  	case 2:;
                break;
		  	case 3:menu_media_recherche();
                break;
            case 4:menu_principal();
                break;
		  	default :cout<<"\a";
		}

}
void menu_media_recherche()
{
	system("cls");
	sig();
	int ch2;
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\t\t**********************Rechercher Média****************************************";
    cout<<"\n\t\t******************************************************************************";
    cout<<"\n\n\n";
    cout<<"\n\t\tSaisir l'identifiant du média";
    cout<<"\n\n\t1.Supprimer média";
    cout<<"\n\n\t2.Mettre à jour média";
    cout<<"\n\n\t3.Retourner";
    cout<<"\n\n\tEnterez votre choix (1-3): ";
    cin>>ch2;
    switch(ch2){
			case 1:;
                break;
		  	case 2:;
                break;
		  	case 3:menu_media();
                break;
		  	default :cout<<"\a";
		}
}


void menu_principal()
{
        int ch;
        system("cls");
        sig();
        cout<<"\n\t\t******************************************************************************";
		cout<<"\n\n\n\tMENU PRINCIPAL";
		cout<<"\n\n\t01. SUJETS D'ACTUALITE";
		cout<<"\n\n\t02. JOURNALISTES";
	  	cout<<"\n\n\t03. MEDIAS";
	  	cout<<"\n\n\t04. SORTIE";
	  	cout<<"\n\n\tVeuillez sélectionner votre option (1-4)";
	  	cin>>ch;
        switch(ch)
	  	{
			case 1:menu_sujet();
                break;
		  	case 2:menu_journaliste();
                break;
		  	case 3:menu_media();
                break;
		  	case 4:exit(0);
		  	default :cout<<"\a";
		}
}
