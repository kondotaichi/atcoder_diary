#define N 100
#define MAX_STRING_LENGTH 20
int main(){
    char S[N][MAX_STRING_LENGTH];
    int count_takahashi=0;
    int i;

    for (i=0;i<N;i++){
        scanf("%s",S[i]);
        //文字列の読み込み
        //%sは改行やスペースのある文字列を読み込むための変換指定子
    }
    for (i=0;i<N;i++){
        if(strcmp(S[i],"Takahashi")==0){
            count_takahashi++;
        }
    }
    printf("%d\n",count_takahashi);
    return 0;
}