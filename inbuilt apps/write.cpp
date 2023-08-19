using namespace std;
int startwrite(){
    for(int i = 44; i > 1; i--){
        for(int j = 150; j > 1; j--){
           cout<<"*";
                if(j == 150 && j == 2)
                cout<<"/";
        }
        cout<<endl;
    }
    return 0;
}