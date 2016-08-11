//
//  main.cpp
//  test_c
//
//  Created by toysking on 2016/08/10.
//  Copyright © 2016年 toysking. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Neko{
private:
    string name;
    
public:
    Neko(string s){
        name =s;
    }
    void naku(){
        std::cout << name << "nyawn" << endl;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    //string name;
    //std::cout << "Hello, World!\n";
    //std::cin >> name;
    //std::cout << name << "さんよろしく";

    string name;
    std::cin >> name;
    
    Neko dora(name);
    
    dora.naku();
    
    return 0;
}
