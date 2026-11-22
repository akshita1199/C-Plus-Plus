#include<bits/stdc++.h>
using namespace std;

/* problem no 15*/
// class Solution {
// public:
//     bool checkRecord(string s) {
//         int absent = 0;
//         int late = 0;

//         for (int i = 0; i < s.length(); i++) {
//             if (s[i] == 'A') {
//                 absent++;
//                 late = 0;
//             } else if (s[i] == 'L') {
//                 late++;
//             } else {
//                 late = 0;
//             }

//             if (absent >= 2 || late >= 3) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };
int main(){
    /*
    problem no 1
    #reverse the number

    given an integer N,write a program to reverse it.
    input
    the first line contains an int T, the total number of testcases. then follow T lines, each line contains an integer N.

    output
    for each test case, display the reverse of the given number N, in a new line.

    constraints
    1<=T<=1000
    1<=N<=1000000

    sample input
    4
    12345
    31203
    2123
    2300

    sample output
    54321
    30213
    3212
    32
    */

    // int t;
    // cin>>t;
    // for(int i=0; i<t; i++){
    //     int n;
    //     cin>>n;
    //     int rev=0;
    //     while(n>0){
    //         rev =rev*10 + n%10;
    //         n/=10;
    //     }
    //     cout<<rev<<endl;
    // }
    /*
    problem no 2
    #42 number 
       your program is to use the brute-force appoach in order to find the answer to life. the universe, and everything. more preciselt...
    rewrite small numbers from input to output. stop processing input after reading in the number 42. all numbers at input are
    integers of one or two digits.

     input
    1
    2
    88
    42
    99

    output
    1
    2
    88
    */
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     int x;
    //     cin>>x;
    //     if(x==42){
    //         break;
    //     }
    //     cout<<x<<endl;
    // }
    /*
    problem no 3
    #sum of digits
    your are int N write program to calculate the sum of all the digits of N.

   input
   the first line contains an int T, the total number of testcases. then follow T lines, each line contains an int N.

   output
   for each test case ,calculate the sum og digits of N and display it in a new line.

   constraints
    1<=T<=1000
    1<=N<=1000000

    example
    input
    3
    12345
    31203
    2123

    output
    15
    9
    8
   */
    // int t;
    // cin>>t;
    // for(int i=0; i<t; i++){
    //     int n;
    //     cin>>n;
    //     int sum=0;
    //     while(n>0){
    //         sum = sum + n%10;
    //         n/=10;
    //     }
    //     cout<<sum<<endl;
    // }

    /*
    problem no 4
    #mango
    one hot summer day motu and his friend patlu decided to buy a mango. they chose the biggest and the ripest one, in their opinion
    after that the mango was weighed, and the scales showed W units. they rushed homme,dying of thirst,and decided to divide the 
    berry,however they faced a hard problem.
    motu and patlu are great fans of even numbers, that's why they want to divide the mango in such a way that each of the two 
    parts weighs even number of units, at the same time it is not obligatory that the parts are equal. the boy are extremely
    tired and want to start their meal as soon as possible, that's why you should help them and find out, if they can divide
    the mango in the way they want.for sure, each of them should get a part of positive weight.

    input 
    the first (and the only) input contains integers number W(1<=W<=1000) the weight of the mango bought by the boys.

    output
    print YES, if the boys can divide the mango into two parts, each of them weighing even number of units; and NO in the opposite 
    case,

    sample input
    1

    sample output
    NO

    */

    // int w;
    // cin>>w;
    // if (w>2 && w % 2==0){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }

    /*
    problem no 5
    #divide by 3, 5

    write a short program that prints each number from 1 to 100 on a new line.
    for each multiple of 3, print "frizz"instead of the number.
    for each multiple of 5, print "buzz" instead of the number.
    for numbers which are multiple of both 3 and 5 , print "frizzbuzz" instead of the number.

    */

    // for(int i=0; i<=100; i++){
    //     if(i%3==0 && i%5==0){
    //         cout<<"fizzbuzz"<<endl;
    //     }
    //     else if (i%3==0){
    //         cout<<"frizz"<<endl;
    //     }
    //     else if(i%5==0){
    //         cout<<"buzz"<<endl;
    //     }
    //     else{
    //         cout<<i<<endl;
    //     }
    // }

    /*
    problem no 6
    # spelling number , even ,odd number print 
    input format

    you will be given two positive integers. a and b (a<=b).
    separated by newline.

    output format
    
    for each integer n in the inclusive intweval[a,b]:
    ~ if 1<=n<=9. then print the english representation of in lowercase. that is"one" for 1."two" for 2, and so on.
    ~else if n>9 and it is an even number, then print "even".
    ~else if n>9 and it is an odd number, then print "odd".

    sample input 
    8
    11

    sample output
    eight
    nine
    even
    odd
    */
    // int a,b;
    // cin>>a>>b;

    // string words[]={"one","two","three","four","five","six","seven","eight","nine"};

    // for(int i=a; i<=b; i++){
    //     if(i>=1 && i<=9){
    //         cout<<words[i-1]<<endl;
    //     }
    //     else if(i>9 && i%2==0){
    //         cout<<"even"<<endl;
    //     }
    //     else{
    //         cout<<"odd"<<endl;
    //     }
    // }

    /*
    problem no 7
    #rectangle 
    pasha has a woodden stick of some positive integer length n. he wants to perform exactly three cuts to get four parts of the
    stick. each part must have some positive integer length and the sum of these lengths will obviouslybe n.

    pasha likes rectangles but hates squares, so he wonders, how many ways are there to split a stick into four parts so that 
    it's possible to from a rectangle using these parts, but is impossible to from a square.

    your task is to help pasha and count the number of such ways. two ways to cut the stick are considered distinct if there 
    exists some integer x , such that the number of parts of length x in the first way differ from the number of parts of 
    length x in the second way.

    input
    the first line of the input contains a positive integer n(1<=n<=2*10^9) the length of pasha's stick.

    output
    the output should contains a single integer the number of way to split pasha's stick into four parts of positive integer 
    length so that it's possible to make a rectangle by connecting the ends of these pars, but is impossible to from a square.

    example input
    6
    20
    example output
    1
    4
    */
//    long long int n;
//    cin>>n;

//    cout<<(n-2)/4<<endl;
     
/*
problem no 8
#friend's relationship

jack is your friend and sophiya is the girlfriend. but due to some unknown reason(unknown for us, they know it )
sophiya started hating to jack. now, jack is in big trouble but he has a solution, he knows that if he will be gift 
T patterns of a particular type (for pattern observation see the sample test cases)then sophiya will start loving again 
to jack. but jack is depressed noe and need your help to gift her that type patterns of '*'and '#' of N lines. so it's
your responsibility to save your friend's relationship.

constraints:
1<=T<=100
1<=N<=30

input 
first line contains T i.e. number of test case.
each of the next T line contain an integer N.

output
for each test case print the pattern of N lines then after a blank line.

example
input
3 
9
2
5

output
*################*
**##############**
***###########***
****#########****
*****#######*****
******######******
*******####*******
********##********
******************


*##*
****

*########*
**######**
***####***
****##****
**********
*/

// int t,n;
// cin>>t;
// cin>>n;
// for(int row=1; row<=n; row++){
//     for(int col =1; col<=row; col++){
//         cout<<"*";
//     }
//     for(int col=1; col<=2*n-2*row; col++){
//         cout<<"#";
    
//     }
//     for(int col=1; col<=row; col++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
/*
problem no 9
#integer sequence dividing

you are given an integer sequence 1,2,...,n. you have to divide it into two sets A and B in such a way that each element 
belongs to exactly one set and [sum A-sum B] is minimum possible.
the value X is the absolute value of X and sum(s) is the sum of elements of the set S.

input
the first line of the input contains one integer n(1<=n<=2*10^9).

output
print one integer the minimum possible value of [sum A-sum B] if you divide the initial sequence 1,2,....n into two sets  
A and B.
 
example
input 
3
5
6

output
0
1
1
*/

// long long int n;
// cin>>n;



// long long sum = n*(n+1)/2;
//     if(sum%2==0){
//         cout<<0;
//     }
//     else{
//         cout<<1;
//     }

/*
problem no 10
**string problem
#size,concatenate,swapped

input format

you are given two string ,a and b . separated by a new line. each string will consist of lower case latin characters('a'-'z').

output format
in the first line print two space- seperated integer, representing the length of a and b respectively.
in the second line print the string produced by concatenating a and b(a+b).
in the third line print two string separated by a space, a' and b'. a' and b' are the same as a and b. respectively.
except that their first characters are swapped.

sample input
abcd
ef

sample output
4 2
abcdef
ebcd af
*/

// string a,b;
// cin>>a>>b;

// cout<<a.length()<<" "<<b.length()<<endl;

// cout<<a.append(b)<<endl;

// char temp=a[0];
// a[0]=b[0];
// b[0]=temp;

// cout<<a<<" "<<b<<endl;
 
/*
problem no 11
#reverse a string

example 
input
geeks
for
a
output
skeeg
rof
a
*/

// string s;
// cin>>s;
// int start =0;
// int end=s.length()-1;
// while(start<end){
//     char temp=s[start];
//     s[start]=s[end];
//     s[end]=temp;
//     start++;
//     end--;
    
// }
// cout<<s<<endl;

/*
problem no 12
#palindrome string

you have been given a string s. you need to find and print whether this string is a palindrome or not. if yes,print
"YES",else print "NO"

input format
the first and only line of input contains the string s. 
the string shall consist of lowercase english alphabets only.

output format
print the required answer on a single line.

constraints
1<=s<=100

input
aba
output
YES
*/

// string s;
// cin>>s;
// int start =0;
// int end=s.length()-1;
// bool ans=true;
// while(start<end){
//     if(s[start]==s[end]){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
//     start++;
//     end--;
// }
    /*
    problem no 13
    #remove characters present in other

    given two string s1 and s2. remove every character from s1 that is present in s2. return the resulting string.
    both string contain only lowercase english letters, and s1>s2.

    example
    input
    s1 computer
    s2 cat
    output
    ompuer
    // */
    // string s1;
    // string s2;
    // cin>>s1>>s2;
    // string result="";

    // for(int i=0; i<s1.length(); i++){
    //     bool found = false;
    //     for(int j=0; j<s2.length(); j++){
    //         if(s1[i]==s2[j]){
    //             found=true;
    //             break;
    //         }
    //     }
    //     if(!found){
    //         result+=s1[i];
    //     }
    // }
    // cout<<result<<endl;

    /*
    problem no 14
    #goal parser interpretation

    you own a goal parser that can interpret a string command. the command consists of an alphabet of "g","()",and /or "(al)"
    in some order. the goal parser will interpret "g"as the string "g","()",as the string "o", and "(al)" as the string "al".
    the interpreted strings are then concatenated in the original order.
    given the string command. return the goal patser interpretation of command.

    example 1
    input command = "g()(al)"
    output = "goal"
    */

    // string command ="g()(al)";
    // string result="";

    // for(int i=0; i<command.length(); i++){
    //     if(command[i]=='g'){
    //         result += 'g';
    //     }
    //     else if(command[i]=='('&& command[i+1]==')'){
    //         result += 'o';
    //         i++;
    //     }
    //     else if(command[i]=='('&& command[i+1]=='a'){
    //         result += "al";
    //         i +=3; 
    //     }
    // }
    //     cout<<result<<endl;

    /*
    problem no 14
    #jewels and stones

    soma is a fashionable girl. she absolutely loves shiny stones that she can put on as jewellery accessories. she has been
    collecting stones since her childhood. now she has become really good with identifying which ones are fake and which 
    ones are not. her king requested for her help in mining precious stone, so she has told him which all stone are jewels and 
    which are not. given her description , your task is to count the number of jewel stone.
    
    more formally, you're given a string j composed of latin characters where each character is a jewel. you're also given
    a string scomposed of latin character where each character is a mined stone. you have to find out how many characters 
    of s are in j as well.

    input
    first line contains an integer t denoting the number of test cases. then follow t test cases. each test case contains
    of two lines, each of which contains a string composed of english lowercase and upper charecters. 
    first of these is the jewel string j and the second one is stone string s. 
    you can assume that 1<=t<=100,1<=j,s<=100

    output
    output for each test case, a single interger, the number of jewels mined.

    sample 1
    input 
    4
    abc
    abcdef
    aA
    abaZ
    aaa
    a
    what
    none

    output
    3
    2
    1
    0
    */
//    int t;
//    cin>>t;
//     for(int tc=0; tc<=t; tc++){
//         string J,S;
//         cin>>J>>S;
//         int count=0;
//         for(int i=0; i<S.length(); i++){
//             for(int j=0; j<J.length(); j++){
//                 if(S[i]==J[j]){
//                     count++;
//                 break;               
//              }
//             }
//         }
//         cout<<count<<endl;
//     }
    
    /*
    problem no 15
    #student attendence record

    you are given a string s reprenting an attendence record for a student where each charecter signifies whether the student
    was absent,late, or present on that day. the record only contains the following three characters:
    ~'A':absent
    ~'L':late
    ~'p':present

    the student is eligible for an attendence award if they meet both of the following criteria:

    ~the student was absent 'A' for strictly fewer than 2 days total.
    ~the student was never late 'L' for 3 or more consecutive days.

    return true if the student is eligible foe an attendence award, or false otherwise.

    example
    input 
    s = "PPALLP"
    S = "PPALLLL"

    output
    true
    false
    */

    // string s;
    // cin>>s;
    // Solution soal;
    // cout<<(soal.checkRecord(s)?"true" :"false")<<endl;

    /*
    problem no 16
    #reverse array

    given an array. A of N integers, print A's element in reverse order as a single line of space-separated number.

    example
    A=1,2,3,4
    print =4 3 2 1 
    */
    
    // int size;
    // cin>>size;
    // int num[size];
    // for(int i=0; i<size; i++){
    //     cin>>num[i];
    // }
    // int start=0; 
    // int end =size-1;
    // while(start<end){
    //     int temp = num[start];
    //     num[start]=num[end];
    //     num[end]=temp;
    //     start++;
    //     end--;
    // }
    // for(int i=0; i<size; i++){
    //     cout<<num[i];
    // }
    // cout<<endl;

    /*
    problem no 17
    #count occurrences in sorted
    given a sorted array and a number target. find the number of occurrences of target in given array.

    example
    input
    1,1,2,2,2,2,2,3
    2
    output
    4
    */
//    int size;
//    cin>>size;
//    int num[size];
//    for(int i=0; i<size; i++){
//     cin>>num[i];
//    }
//    int x;
//    cin>>x;

//    int count=0;
//    for(int i=0; i<size; i++){
//     if(num[i]==x){
//     count++;   
// }
// }
// cout<<count<<endl;

/*
    problem no 18
    #cost of ballons

    you are conducting a contest at your college. this contest consists of two problems and n participants. you know the 
    problem that a candidate will solve during the contest.
    
    you provide a balloon to a particiant after he or she solve a problem. there are only green and purple colored balloons
    available in a market. each problem must have a balloon associated with it as a prize for solving that specific problem.
    you can distribute balloons to each participant by performing the following operation:

    1.use green-colored ballons for the first problem and purple-colored bailoons for the second problem.
    2.use purple-colored ballons for the first problem and green-colored bailoons for the second problem.

    you are given the cost of each balloon and problems that each participent solve. your task is to print the minimum 
    price that you have to pay while purchasing balloons.

    input format
    * first line-T that denotes the number of test cases(1<=T<=10)
    *for each test case
        *first line-cost of green and purple-colored ballons
        *second line-n that denotes the number of participents(1<=n<=10)
    
    output format
    for each test case, print the minimum cost that you have to pay to purchase ballons.

    example
    input
    2
    9 6
    10
    1 1
    1 1
    0 1
    0 0
    0 1
    0 0
    0 1
    0 1
    1 1
    0 0

    output
    69
// */
//     int t;
//     cin>>t;

// for(int tc=0; tc<t; tc++){
//     int green,purple;
//     cin>>green>>purple;

//     int n;
//     cin>>n;
    
//     int count1=0;
//     int count2=0;

//     for(int i=0; i<n; i++){
//         int a,b;
//         cin>>a>>b;

//         count1+=a;
//         count2+=b;
//     }
//     int cost1=count1*green + count2*purple;
//     int cost2=count1*purple + count2*green;

//     cout<<min(cost1,cost2)<<endl;
// }

/*
problem no 20
#micro and array update

micro  purchased an array a having n integer values. after playing it for a while, he got bored of it and decided to update
value of its elements. in one second he can increase value of each array element by 1.he wants each array element's value to
become greater than or equal to k. please help micro to find out the minimum amount of time it will take, for him to do so.

input
first line consists of a single integer, t,denoting the number of test cases.
first line of each test case consists of two space separated interger denoting n and k.
second line of each test case consists of n space separated integers denoting the array a.

output
for each test case, print the miinimum time in which all array elemets will become greter than or equal to k. 
print a new line after each test case.

example
input
2 
3 4
1 2 5

3 2
2 5 5

output
3 
0
*/

    // int t;
    // cin>>t;
    // for(int tc=0; tc<t; tc++){
    //     int n,k;
    //     cin>>n>>k;

    //     int arr[n];
    //     int maxtime=0;

    //     for(int i=0; i<n; i++){
    //         cin>>arr[i];

    //         if(arr[i]<k){
    //             maxtime=max(maxtime,k-arr[i]);
    //         }
    //     }
    //     cout<<maxtime<<endl;
    // }

    /*
    problem no 21
    #roted clockwise direction

    given an array ,roted the array by one position in clockwise de=irection.

    example
    input
    1 2 3 4 5
    output
    5 1 2 3 4 
    */
//    int size;
//    cin>>size;
//    int arr[size];
//    for(int i=0; i<size; i++){
//     cin>>arr[i];
//    }

//    int last=arr[size-1];
//     for(int i=size-1;i>0;i--){
//         arr[i]=arr[i-1];
//     }
//     arr[0]=last;

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

/*
    problem no 22
    #caevans
    most problems on codechef highlight chef's love for food and cooking but little is known about his love for racing sports.
    he is an avoid formula 1 fan. he went to watch this year's indian grand prix at new dilhi. he noticed that one segment
    of the circuit was a long straight road. it was impossible for a car to overtake other cars on this segment. therefore,
    a car had to lower down its speed if there was a slower car in front of it. while watching the race,chef stared to 
    wonder how many cars were moving at their maximum speed.
    
    formally, you're given the maximim speed of n cars in the order they entered the long straight segment of the circuit.
    each car prefers to move at its maximum speed. if that's not possible because of the front car being slow, it might have
    to lower its speed. it still moves at the fastest possible speed while avoding any collisions. for the purpose of this
    problem, you can assume that the straight segment is infinitely long.

    count the number of cars which were moving at their maximum speed on the straight segment.

    input
    the first line of the input contains a single integer t decoting the number of test cases to follow.
    description of each test case contains 2 lines. the first of these lines contain a single integer n, the number of cars.
    the second line contains n space separated integers, denoting the maximum speed of the cars in the order they entered the
    long straight segment.

    output 
    for each test case, output a single line containing the number of cars which were moving at their maximum speed on the segment.

    constrains
    1<=T<=100
    1<=n<=10000

    sample
    input
    3
    1
    10
    3
    8 3 6
    5 
    4 5 1 2 3
    output
    1
    2
    2
*/

    int t;
    cin>>t;
    for(int tc=0; tc<t; tc++){
        int n; 
        cin>>n;

        int count =0;
        int minspeed=1000000000;

        for(int i=0; i<n; i++){
            int speed;
            cin>>speed;

            if(speed<=minspeed){
                count++;
                minspeed=speed;
            }
        }
        cout<<count<<endl;
    }
}
