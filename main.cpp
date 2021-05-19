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


using namespace std;


struct date
{

int jour;

int mois;

int annee;
};


struct adresse

{
    int num;
    string rue,ville;
};

int main()
{

    system("COLOR F0");
	intro();
    menu_principal();
    return 0;
}
