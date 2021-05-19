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
#include "date.h"
#include "journa.h"
#include "journarec.h"
#include "journaindep.h"


using namespace std;


int main()
{

    system("COLOR F0");
	intro();
    menu_principal();
     journa j1(2,'Oumayma', 'Redissi', 23 , 'Licence');
    cout<<j1;
    return 0;
}
