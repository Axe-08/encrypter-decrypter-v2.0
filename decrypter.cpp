#include <bits/stdc++.h>
using namespace std;

int rule_1(const std::vector<int> v){
    int n=(v[0]*v[7]/v[8])+v[9]/v[6];
return n;
}
int rule_2(const std::vector<int> v){
    int n=(v[1]+v[3]/v[5]*v[7])+v[2]/v[0];
return n;
}
int rule_3(const std::vector<int> v){
    int n=(v[1]*pow(v[3],v[4])/(v[9]+v[8]));
return n;
}
int rule_4(const std::vector<int> v){
    int n = (v[8] * v[5]) + (v[(v[4] + 3) % 10] / 2);
return n;
}
int rule_5(const std::vector<int> v){
    int n = (v[7] + v[(v[3] + 5) % 10]) * (v[(v[8] + 7) % 10] - v[(v[1] + 1) % 10]);
return n;
}
int rule_6(const std::vector<int> v){
    int n= (v[(v[2] + 2) % 10] > 102) ? (v[6] * v[(v[4] + 2) % 10]) / 3 : v[0];;
return n;
}
int rule_7(const std::vector<int> v){
    int n = (v[7] % 2 == 0) ? std::pow(v[(v[4] + 4) % 10], 2) : std::sqrt(v[(v[0] + 6) % 10]);
return n;
}
int rule_8(const std::vector<int> v){
    int n=(v[9] > 110) ? (v[4] + (v[(v[5] - 5)%7])) : (v[9] - (v[(v[3] + 3)%8]));
return n;
}


int main(){
    string pass,key;
    vector<int> v;
    vector<char> w;
        //coded password input       
        cout<< "Enter the encode password you want to decrypt(8 characters):" << endl;
        cin >> pass;
            if(size(pass) != 8){
        cout<< "enter valid password";
        return 0;
        }
        //key input
        cout<< "Enter the key:"<<endl;
        cin >> key;  
            if(size(key)<10){
            cout << "enter longer key";
            return 0;
        }
        //breakdown of key 
        for(size_t i = 0; i < size(key); i++)
        {
            v.push_back(key[i]);
        }
        //rule implimentation
        {
        w.push_back((int)pass[0]-rule_1(v));
        w.push_back((int)pass[1]-rule_2(v));
        w.push_back((int)pass[2]-rule_3(v));
        w.push_back((int)pass[3]-rule_4(v));
        w.push_back((int)pass[4]-rule_5(v));
        w.push_back((int)pass[5]-rule_6(v));
        w.push_back((int)pass[6]-rule_7(v));
        w.push_back((int)pass[7]-rule_8(v));
        }
        
        cout << "your decoded password is:" <<endl;
        //printing out decoded password
        for (int i = 0; i < 8; i++)
        {
            cout << w[i];
        }
        
    return 0;
}
