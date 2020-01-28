
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    string s;
    float n = 0 , sum = 0 , sd , mu  , sqr_sum = 0;
    ifstream score;
    score.open("score.txt");
    while(getline(score, s)){
        sum += stof(s);
        sqr_sum += pow(stof(s) , 2);
        n++;
    }
    mu = sum / n ;
    sd = sqrt((sqr_sum / n) - pow(mu , 2) );
    cout << "Number of data = " << n; 
    cout << "\nMean = " << mu ;
    cout << "\nStandard deviation = " << sd;
    score.close();
}