#include <bits/stdc++.h>
using namespace std;
class Student
{
    private:
        int rollno;
        char name[20];
    public:
        class Adress{
        private:
            int HNo;
            char city[20];
        public:
            void setAdress(int h, char *s)
            {
                HNo=h;
                strcpy(city,s);
            }
            void showAdress()
            {
                cout<<HNo<<" "<<city<<" ";
            }
        };
        Adress add;
    public:
        void setRollNo(int x){rollno=x;}
        void setName(char *s){strcpy(name,s);}
        void setAdress(int h, char *s){add.setAdress(h,s);}
        void showStudent(){
            cout<<rollno<<" "<<name<<" "; add.showAdress();
        }
};
int main(){
    Student s1;
    // To access Adress class we may 
    Student::Adress a1;
    s1.setRollNo(100); s1.setName("Rahul"); s1.setAdress(102,"hisar");
    s1.showStudent();
    return 0;
}