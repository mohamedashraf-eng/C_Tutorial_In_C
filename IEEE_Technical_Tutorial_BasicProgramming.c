/*==============================================================================
************************* BASIC PROGRAMMING TUTORIAL ***************************
============== Instrcutors: Omar Hany (Derwy) - Mohamed Ashraf (Wx) ============
 = = = Copyrights @ Coded & Develobed by Mohamed Ashraf = = = = = =
********************************************************************************
  Learning:
 * 1: Data Types.
 * 2: Discussion Making (If Statements).
 * 3: While loop.
 * 4: For loop.
==============================================================================*/

 #include <stdio.h> // Library that includes standard input output E2U functions.
 #include <stdlib.h>
 #include <stdint.h>
 #include <stdbool.h>
 #include <conio.h>
 #include <math.h>
 #include <windows.h>

 #define BKSP 8
 #define ENTER 13
 #define ESC 27
 #define SP 32
 #define TAB 9
//===== FUNCTION DECLARATION ====.
  void Intro(void);
  void Outro(void);
  void Datatypes(void);
  void DisscutionMaking(void);
  void Whileloop(void);
  void forloop(void);

  int   Testing1(int* , int*);
  float Testing2(float* , float*);
  char  Testing3(char* , char*);

//===== MAIN =============
  int main(void)
  {system("COLOR 0A");

    char input;
    start:{

    Intro();
    input = _getch();

    switch(input)
    {
      char esc;

      case '1': system("cls");
                while(esc != 'y' || esc != 'Y')
                {
                  printf("\n Welcome to Datatypes tutorial.\n");
                  printf("\n We have many datatypes. We gonna know the most popular ones.\n");
                  Datatypes();
                  printf("\n Leave session?(y/n) "); esc = _getch(); system("cls");
                  if(esc == 'y' || esc == 'Y') {goto start;}
                  else if (esc != 'y' || esc != 'n') {printf("\n Enter valid input next time!. \n");}
                }
        break;
      case '2': system("cls");
                while(esc != 'y' || esc != 'Y')
                {
                  printf("\n Welcome to Decision Making tutorial.\n");
                  printf("\n We use If Statement to control set of inputs to satisfiy our needs. We gonna learn the general form.\n \n");
                  DisscutionMaking();printf("\n Leave session?(y/n) "); esc = _getch(); system("cls");
                  if(esc == 'y' || esc == 'Y') {goto start;}
                  else if (esc != 'y' || esc != 'n') {printf("\n Enter valid input next time!. \n");}
                }
        break;
      case '3': system("cls");
                while(esc != 'y' || esc != 'Y')
                {
                  Whileloop();
                  printf("\n Leave session?(y/n) "); esc = _getch(); system("cls");
                  if(esc == 'y' || esc == 'Y') {goto start;}
                  else if (esc != 'y' || esc != 'n') {printf("\n Enter valid input next time!. \n");}
                }
        break;
      case '4': system("cls"); printf("\n This Feature isn't working at the moment ! try other features.");
        break;
      default: printf("\n Invalid input !\n");
        break;
   } // End Switch.
  } // End Label: start.
 } // End main.
//====================================================
  void Intro()
  {
    printf("\n \t ==> Note If program (Crashed / Errored / Finished proccess) please restart it <== \n");
    printf("\n Welcome to Introduction to Basic Programming in > C/C++ <\n"); printf("\n Instructors : Omar Hany / Mohamed Ashraf\n");
    printf("\n This tutroial contain 4 session to learn: ");
    printf("\n 1) Data Types.\n 2) Decision Making.\n 3) While loop.\n 4) For loop.\n");
    printf("\n Enter number of session to start its tutorial ");
  }
  void Outro()
  {
    printf("\n Thanks for using! I hope you enjoyed and learnt somthing. :) \n Good luck! \n");
    printf("\n \n \t @Copyrights, Mohamed Ashraf (Wx) \n Serial.Code: 00 3WxDTC3NA \n");
  }
//====================================================
  int Testing1(int* a , int* b)
  {
    int result = 0;

    result = *a + *b;
    return result;
  }
  float Testing2(float* a , float* b)
  {
    float result = 0.0;
    result = *a + *b;
    return result;
  }
  char Testing3(char* a , char* b)
  {
    char result = '\0';
    result = *a + *b;
    return result;
  }
//====================================================
  void Datatypes()
  {
    int x = 0 , y = 0;
    float xx = 0.0 , yy = 0.0;
  //  char xxx = '\0' , yyy = '\0';
    int dinput;

    printf("\n We have Primitive Datatypes that contain 4 main datatypes.");
    printf("\nMain Datatypes:\n 1) int\n 2) float\n 3) char\n 4) boolean\n");
    printf("\n Enter number of datatype to know its properties "); dinput = _getch();

    switch(dinput)
      {
        case '1': system("cls");
                printf("\n 1- (int) with size %d bit \n \t that can store data with type integer numbers from 0 to %.0f different values",(sizeof(int)*8),pow(2,(sizeof(int)*8)));
                printf("\n For example. \n Enter two integer variables to get the sum. \n");
                printf("\n Enter[1] : "); scanf("%d",&x);
                printf("\n Enter[2] : "); scanf("%d",&y);
                Testing1(&x,&y);
                printf("\n Sum = %d (Decimal value)\n",Testing1(&x,&y));
                printf("\n Note, If you tried to input float or char etc.. values program will crash.(Prove point)\n");
                printf("& You will need to restart it.\n ");
          break;

        case '2': system("cls");
                printf("\n 2- (float) with size %d bit \n \t that can store data with type float numbers from 0 to %.0f different values",(sizeof(float)*8),pow(2,(sizeof(float)*8)));
                printf("\n For example. \n Enter two float variables to get the sum. \n");
                printf("\n Enter[1] : "); scanf("%f",&xx);
                printf("\n Enter[2] : "); scanf("%f",&yy);
                Testing2(&xx,&yy);
                printf("\n Sum = %.2f (floating point value)\n",Testing2(&xx,&yy));
          break;
        case '3': system("cls");
                printf("\n 3- (char) with size %d bit \n \t that can store data with character from 0 to %.0f different values",(sizeof(char)*8),pow(2,(sizeof(char)*8)));

          break;
        case '4': system("cls");
                printf("\n 3- (bool) with size %d bit \n \t that can store data with TRUE/FALSE State from 0 to %.0f different values",(sizeof(bool)*8),pow(2,(sizeof(bool)*8)));
          break;
        default: printf("\n Invalid input !\n");
    }
  }
//====================================================

   void DisscutionMaking(void)
   {
     char in;
     uint8_t flag1 , flag2 , flag3;

     printf("\n Suppose we have specific product with specific charactarestics. Here comes the use of (if statements).\n");
     printf("\n For exmple,\n");
     printf("\n If we got customer that need somthing to write with. and has specific charactarestics.\n");
     printf("\n The Customer wants it \n 1- Pen\n 2- Small and comfortable in the hand\n 3- Write in small font etc...\n");
     printf("\n We can use (If/Else if Statements) to get his perfect pin!\n"); printf("\n");
     printf("For example, \n if(product == pen)  {next1;}\n else if(product == comofortable)  {next2;}\n else if(product == thin_font)  {next3;}\n else   {ignore;}\n");
     printf("\n Lets test our example!\n");

     printf("\n Do you want pen?(y/n) "); in = _getch();
     if(in == 'y' || in == 'Y')      {printf("\n next1\n"); flag1 = 1;}
     else if(in == 'n' || in == 'N') {printf("\n ignored1\n"); flag1 = 0;}
     else {printf("\n ! Wrong input. please use only (y/n) to response.\n"); flag1 = 2;}

    printf("\n Do you want it comofortable?(y/n) "); in = _getch();
     if(in == 'y' || in == 'Y') {printf("\n next2\n"); flag2 = 1;}
     else if(in == 'n' || in == 'N') {printf("\n ignored1\n"); flag2 = 0;}
     else {printf("\n ! Wrong input. please use only (y/n) to response.\n"); flag2 = 2;}

    printf("\n Do you want it thin font?(y/n) "); in = _getch();
     if(in == 'y' || in == 'Y')
      {printf("\n next3\n"); flag3 = 1;}
      else if(in == 'n' || in == 'N') {printf("\n ignored3\n"); flag3 = 0;}
      else {printf("\n ! Wrong input. please use only (y/n) to response.\n"); flag3 = 2;}

      if((flag1&flag2&flag3) == 1)      {printf("\n  looks it worked! Customer now is happy.\n");}
      else if((flag1&flag2&flag3) == 0) {printf("\n  Good News! Program worked well. Bad news customer didn't find his perfect product. \n");}
      else printf("\n Error!\n");
   }
//====================================================
  void Whileloop()
  {
    int Operation_Time = 1;
    int Times_need = 0;

    printf("\n Suppose we want to do some operations many times.\n"); printf("\n If we want to print number set from 1 to 40. What should we do?\n");
    printf("\n It is not effiecent to print it manually and type it like that,\n printf(1); to . . . printf(40); \n");
    printf("\n It is waste of time and energy. Otherwise we can use loops to do it for use!\n");
    printf("\n While(Operation_Time <= Time_need)\n{\n do the operation;\n Operation_Time++;\n}\n");
    printf("\n to prove our While Loop we will substitute the values and print Numbers  from 1 to 5, \n \n");

    printf("\n Enter value to satisfy while loop condition!\n To print numbers from [0 to n]\n");
    printf(" Enter:  "); scanf("%d",&Times_need);
    while(Operation_Time <= Times_need)
    {
      printf("\n \t %d",Operation_Time); printf(" \n");
      Operation_Time++;
    }
    printf("\n The previous printing made by While(loop){;} ! \n");
  }
