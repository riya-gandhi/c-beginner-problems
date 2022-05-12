#include<iostream>
#include<string.h>
#include<malloc.h>
using namespace std;

class String{
public:
    char *str_;
    int len_;
    String(char *s) : str_(strdup(s)), len_(strlen(str_)){}
    String& operator = (const String& s){
        free(str_);
        str_=strdup(s.str_);
        len_=s.len_;
        return *this;
    }
    ~String(){free(str_);}
    void print(){cout<<str_<<":"<<len_<<endl;}
};

int main(){
    String s1 = "CPP",s2 = "C++";
    s2 = s2;
    s2.print();
    return 0;
}
