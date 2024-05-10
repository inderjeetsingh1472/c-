//ENCAPSULATION=#binding of methods and variables together into a single unit(class)
     //         #data is only accessible from the class methods
     //        # also leads to data abstraction/hiding, generally class is known as ADT(Abstract dadta types)
     #include<iostream>
     using namespace std;
     class ABC{
        // private:
        int x;
        public:
        void set(int n){
            x=n;
        }
        int get(){
            return x;
        }
     };
     int main(){
        ABC obj1;
        obj1.set(5);
        cout<<obj1.get()<<endl;
     }