#include<bits/stdc++.h>
using namespace std;
struct book{
    private:        //cant access by main 
    int book_id;
    char title[20];
    float price;
    public:
    void input(){           //1
    cout<<"enter id,price,title";
    cin>>book_id>>price>>title;
    if(book_id<0){
        book_id=-book_id;
    }
}
    void dispaly(){         //2
    cout<<book_id<<"\t"<<price<<"\t"<<title;
}
};
int main(){
    book b;
    b.input();
    b.dispaly();
}