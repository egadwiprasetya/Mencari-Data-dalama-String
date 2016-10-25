@@ -1,15 +1,46 @@
//
//  main.cpp
//  LA PAA
//
//  Created by Ega on 10/17/16.
//  Copyright © 2016 Ega. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

string source_Data = "010100111011001010001100";
string find_string;
 
int counter, counter2, x=0, benar=0, desimal=0;

int main() {
    cout <<"masukkan data yang ingin dicari : ";
    cin >>find_string;
    for (int counter = 0; counter<source_Data.size(); counter++) {
        for (int counter2=0; counter2<find_string.size(); counter2++) {
            if (find_string[counter2]==source_Data[counter2+counter]) {
                x++;
            } else {
                x=0;
                break;
            }
        }
        if (x==find_string.size()) {
            benar=1;
            break;
        } else {
            benar=0;
        }
    }
    if (benar==1) {
        cout<<"Data ditemukan\n";
        int y=find_string.size()-1;
        for (int counter2=find_string.size()-1; counter2>=0; counter2--) {
            if (find_string[counter2]=='1') {
                desimal=desimal + pow(2, (counter2-y)*-1);
            } else
            {
                desimal = desimal +0;
            }
        }
        cout<<"hasil konversi ke desimal : "<<desimal;
    } else cout<<"data tidak ditemukan";
    cout<<"\nTerimakasih\n";
    
    return 0;
}

