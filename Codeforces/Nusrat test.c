#include <stdio.h>
#include<conio.h>

//fucntion declarations
float determine_grade_point(int marks);
int determine_grade(int marks);
float determine_CGPA(float gpa1, float gpa2);
float SGPA(float marks1,float marks2,float marks3,float marks4,float marks5);

int main()
{
    //variables
    int CSE_101;
    int PHY_101;
    int GED_101;
    int GED_102;
    int ENG_101;
    int CSE_103;
    int CSE_104;
    int PHY_103;
    int PHY_104;
    int MATH_101;

    float CSE_101_grade_point;
    float PHY_101_grade_point;
    float GED_101_grade_point;
    float GED_102_grade_point;
    float ENG_101_grade_point;
    float CSE_103_grade_point;
    float CSE_104_grade_point;
    float PHY_103_grade_point;
    float PHY_104_grade_point;
    float MATH_101_grade_point;


    //extra varibles
    float SEMISTER_1_SGPA;
    float SEMISTER_2_SGPA;
    float CGPA;
    float Avarage;


    //user inputs
    printf("SEMISTER 1 SUBJECTS\n");
    CSE_101:
    printf("CSE_101 = ");
    fflush(stdin);
    scanf("%d", &CSE_101);
    //fflush(stdin);

    if((int)CSE_101 == 0) {
            printf("Wrong input\n");
            //fflush(stdin);
        goto CSE_101;
    }
    else if(CSE_101<0 || CSE_101>100 )
    {
        printf("value should be 0-100\n");
        goto CSE_101;
    }
    PHY_101:
    printf("PHY_101 = ");
    scanf("%d", &PHY_101);
    if(PHY_101<0 || PHY_101>100)
    {
        printf("value should be 0-100\n");
        goto PHY_101;
    }
    GED_101:
    printf("GED_101 = ");
    scanf("%d", &GED_101);
    if(GED_101<0 || GED_101>100)
    {
        printf("value should be 0-100\n");
        goto GED_101;
    }
    GED_102:
    printf("GED_102 = ");
    scanf("%d", &GED_102);
    if(GED_102<0 || GED_102>100)
    {
        printf("value should be 0-100\n");
        goto GED_102;
    }
    ENG_101:
    printf("ENG_101 = ");
    scanf("%d", &ENG_101);
    if(ENG_101<0 || ENG_101>100)
    {
        printf("value should be 0-100\n");
        goto ENG_101;
    }

    printf("\nSEMISTER 2 SUBJECTS\n");
    CSE_103:
    printf("CSE_103 = ");
    scanf("%d", &CSE_103);
    if(CSE_103<0 || CSE_103>100)
    {
        printf("value should be 0-100\n");
        goto CSE_103;
    }
    CSE_104:
    printf("CSE_104 = ");
    scanf("%d", &CSE_104);
    if(CSE_104<0 || CSE_104>100)
    {
        printf("value should be 0-100\n");
        goto CSE_104;
    }
    PHY_103:
    printf("PHY_103 = ");
    scanf("%d", &PHY_103);
    if(PHY_103<0 || PHY_103>100)
    {
        printf("value should be 0-100\n");
        goto PHY_103;
    }
    PHY_104:
    printf("PHY_104 = ");
    scanf("%d", &PHY_104);
    if(PHY_104<0 || PHY_104>100)
    {
        printf("value should be 0-100\n");
        goto PHY_104;
    }
    MATH_101:
    printf("MATH_101 = ");
    scanf("%d", &MATH_101);
    if(MATH_101<0 || MATH_101>100)
    {
        printf("value should be 0-100\n");
        goto MATH_101;
    }



    //grade point determination using function
    CSE_101_grade_point = determine_grade_point(CSE_101);
    PHY_101_grade_point = determine_grade_point(PHY_101);
    GED_101_grade_point = determine_grade_point(GED_101);
    GED_102_grade_point = determine_grade_point(GED_102);
    ENG_101_grade_point = determine_grade_point(ENG_101);
    CSE_103_grade_point = determine_grade_point(CSE_103);
    CSE_104_grade_point = determine_grade_point(CSE_104);
    PHY_103_grade_point = determine_grade_point(PHY_103);
    PHY_104_grade_point = determine_grade_point(PHY_104);
    MATH_101_grade_point = determine_grade_point(MATH_101);

    //SGPA & CGPA determination
    SEMISTER_1_SGPA = SGPA(CSE_101_grade_point,PHY_101_grade_point,GED_101_grade_point,GED_102_grade_point,ENG_101_grade_point);
    SEMISTER_2_SGPA = SGPA(CSE_103_grade_point,CSE_104_grade_point,PHY_103_grade_point,PHY_104_grade_point,MATH_101_grade_point);
    CGPA = determine_CGPA(SEMISTER_1_SGPA,SEMISTER_2_SGPA);
    Avarage = CGPA*20;


    //output grade & grade point
    //SEMISTER 1
    printf("\n\nSEMISTER 1 RESULT\n");

    printf("CSE_101   %.2lf  ",CSE_101_grade_point);
    printf("%c\n",determine_grade(CSE_101));
    printf("PHY_101   %.2lf  ",PHY_101_grade_point);
    printf("%c\n",determine_grade(PHY_101));
    printf("GED_101   %.2lf  ",GED_101_grade_point);
    printf("%c\n",determine_grade(GED_101));
    printf("GED_102   %.2lf  ",GED_102_grade_point);
    printf("%c\n",determine_grade(GED_102));
    printf("ENG_101   %.2lf  ",ENG_101_grade_point);
    printf("%c\n",determine_grade(ENG_101));
    printf("SEMISTER 1 SGPA = %.2lf\n\n", SEMISTER_1_SGPA);

    //SEMISTER 2
    printf("SEMISTER 2 RESULT\n");

    printf("CSE_103   %.2lf  ",CSE_103_grade_point);
    printf("%c\n",determine_grade(CSE_103));
    printf("CSE 104   %.2lf  ",CSE_104_grade_point);
    printf("%c\n",determine_grade(CSE_104));
    printf("PHY_103   %.2lf  ",PHY_103_grade_point);
    printf("%c\n",determine_grade(PHY_103));
    printf("PHY_104   %.2lf  ",PHY_104_grade_point);
    printf("%c\n",determine_grade(PHY_104));
    printf("MATH_101   %.2lf  ",MATH_101_grade_point);
    printf("%c\n",determine_grade(MATH_101));
    printf("SEMISTER 2 SGPA = %.2lf\n\n", SEMISTER_2_SGPA);

    //CGPA Output
    printf("CGPA %.2lf  \nOverall Grade ", CGPA);
    printf("%c\n\n", determine_grade(Avarage));


    return 0;
}


    float determine_grade_point(int marks)
    {
          float grade_point;
          float clamped_grade_point;
          grade_point = marks / 20.00;

          if (grade_point>4)
          {
              clamped_grade_point = 4;
          }

          else if(grade_point<2)
          {
              clamped_grade_point = 0;
          }

          else clamped_grade_point = grade_point;

          return clamped_grade_point;
    }

    int determine_grade(int marks)
    {

        if (0<=marks && marks<=39)
            printf("F");
        else if (40<=marks && marks<=44)
            printf("D");
        else if (45<=marks && marks<=49)
            printf("C");
        else if (50<=marks && marks<=54)
            printf("C+");
        else if (55<=marks && marks<=59)
            printf("B-");
        else if (60<=marks && marks<=64)
            printf("B");
        else if (65<=marks && marks<=69)
           printf("B+");
        else if (70<=marks && marks<=74)
            printf("A-");
        else if (75<=marks && marks<=79)
            printf("A");
        else if (80<=marks && marks<=100)
            printf("A+");

        return 0;
    }

    float determine_CGPA(float gpa1, float gpa2)
    {

    float cgpa;

    if (gpa1<2 || gpa2<2)
        cgpa = 0;

    else cgpa = (gpa1+gpa2)/2.00;

    return cgpa;

}

    float SGPA(float marks1,float marks2,float marks3,float marks4,float marks5)
    {

          float GPA;
          float clamped_GPA;

          if(marks1<2 || marks2<2 || marks3<2 || marks4<2 || marks5<2)
            GPA = 0;

          else GPA = ((marks1+marks2+marks3+marks4+marks5)/5.00);

          if(GPA<2)
              clamped_GPA = 0;

          else if(GPA>4)
              clamped_GPA = 4;

          else clamped_GPA = GPA;

          return clamped_GPA;
    }

