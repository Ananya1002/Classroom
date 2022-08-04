#include<iostream>
using namespace std;

class complex{
    int real, img;
    public:
    complex(int r, int i){
        real=r;
        img=i;
    }
    bool operator >(complex y){
        if(real>y.real){
            return true;
        }
        else if(real==y.real){
            if(img>y.img){
                return true;
            }
            else{
                return false;
            }
        }
        else {
        return false;
        }
    }
    
};
int main(){
    complex A(5, 7), B(5, 10);
    if(A>B){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}
