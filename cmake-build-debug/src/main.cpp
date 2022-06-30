#include <iostream>
using namespace std;

#include "../inc/swap.h"

#include <string>

// 1.define常量
#define day 7

//结构体创建
struct student {
    string name;
    int age;
    int score;
};

struct teacher {
    int id;
    string name;
    int age;
    struct student stu;
};


void bubbleSorting(int * arrP, int len)
{
    for (int i = 0; i < len - 1; i++) {

        for (int j = 0; j < len - i - 1; j++) {
            if (arrP[j] > arrP[j+1])
            {
                int temp = arrP[j];
                arrP[j]=arrP[j+1];
                arrP[j+1]=temp;
            }
        }
    }
}

void arrayPrint1(int * arrP, int len)
{
    for (int i = 0; i < len; ++i) {
        cout << arrP[i] << " ";

    }
}
void arrayPrint2(int * arrP, int len)
{
    for (int i = 0; i < len; ++i) {
        cout << arrP[i] << " ";

    }
}

int main() {


    struct student arr[3] = {
            {"张三", 18, 100},
            {"李四", 20, 90},
            {"王麻子", 22, 60}

    };
    struct student s1 = {"张三", 18, 100};
    student * p = &s1;
    cout << "name: " << p->name << "  age: " << p->age << "  scores: " << p->score << endl;

    teacher t;
    t.id = 10000;
    t.name = "老王";
    t.age = 50;
    t.stu.name = "小王";
    t.stu.age = 20;
    t.stu.score = 60;






    // //cout << "一周一共: " << day << "天" <<endl;

    // //2.const 可以修饰变量
    // int month = 12;
    // month = 24;
    // //cout << "一年一共: " << month << "月" <<endl;

    // short num = 32768  ;
    // //cout <<  sizeof(short) << endl;

    // float f1 = 3.14f;
    // double d1 = 3.14;
    // cout <<  f1 << endl;
    // cout <<  d1 << endl;


    // //字符类型变量对应的ASCII编码
    // //a - 97 ~ 以此类推
    // //A - 65 ~ 以此类推
    // char ch = 'a';
    // char CH = 'A';
    // int sizeChar = sizeof(ch);
    // cout << (int)ch<<endl;

    // //转义字符

    // //换行符 \n

    // cout << "hello world\n";


    // //反斜杠 \\

    // cout << "\\";


    // //水平制表符 \t  作用是可以整齐的输出。。。

    // cout << "hello world\n";


    // //字符串
    // char str1[] = "hello world";
    // cout << str1 << endl;

    // string str2 = "hello world";
    // cout << str2 << endl;



    // int a = 0;
    // cout << "Please input a valuse:" << endl;
    // cin >> a;
    // cout << "The value you input:" << a << endl;
    // system("pause");

    // bool element = true;
    // cout << "Please input a valuse:" << element << endl;
    // cin >> element;
    // cout << "The value you input:" << element << endl;
    // system("pause");


    //加减乘除

    //三目运算符
    //创建三个变量 a b c
    //将a和b作比较，将变量大的值赋值给变量c

    //水仙花数 do...while循环
    // int num =100;

    // // do
    // // {
    // //     int a = num%10;
    // //     int b = num/10%10;
    // //     int c = num/100;

    // //     if (a*a*a + b*b*b + c*c*c == num)
    // //     {
    // //         cout << num << endl;
    // //     }
    // //     num++;
    // // } while (num<1000);


    // c = a > b ? a : b;
    // cout << c << endl;

    // int num [] = {2,4,6,9,1,3,5,8,7,12,10,11,0};
    // cout << "排序前的数字组为： "<< endl;
    // for ( int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout<< endl;



    // for (int i = 0; i < sizeof(num)/sizeof(num[0]) - 1; i++)
    // {
    //     for (int j = 0; j < sizeof(num)/sizeof(num[0]) - i - 1; j++)
    //     {
    //         if (num[j] > num[j+1])
    //          {
    //             int temp = num[j];
    //             num[j] = num[j+1];
    //             num[j+1] = temp;
    //         }

    //     }

    // }

    // cout << "排序后的数字组为： "<< endl;
    //     for ( int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout<< endl;

    //int a = 10;
//    int b = 20;
//    swap(a,b);
//
//    int a = 10;
//    int * p;
//    p = & a;
//    cout << "sizeof (int *) = " << sizeof (p) << endl;
//
//    *p = 1000;
//    cout << a << endl;
//    cout << *p << endl;

//      int arr[] = {1,2,3,4,5,6,7,8,9,10};
//
//      int * p = arr;
//      cout << "the first element in the array "<< *p << endl;
//
//    for (int i = 0; i < sizeof (arr)/sizeof (arr[0]); ++i) {
//        cout << p[i] << endl;
//    }
////
////      int num = 112;
////      char str = 'I';
////      cout << (int)str << endl;
////      cout << "the second element in the array  "<< *p << endl;
//      int arr2[] = {2,4,6,9,1,3,5,8,7,12,10,11,0};
//
//      //the length of array
//
//      int len = sizeof (arr2)/sizeof (arr2[0]);
//      arrayPrint1(arr2,len);
//      cout << endl;
//      bubbleSorting(arr2,len);
//      arrayPrint2(arr2,len);
//      cout << endl;




    system("pause");



    return 0;

}
