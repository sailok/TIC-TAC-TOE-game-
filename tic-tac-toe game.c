#include<stdio.h>

char place[10]={'0','1','2','3','4','5','6','7','8','9'};

void board(){
    printf("\t\t\tTIC-TAC-TOE\n");
    printf("\t\t\tPlayer-1==>X\n");
    printf("\t\t\tPlayer-2==>O\n\n");
    printf("\t\t\t%c | %c | %c\n",place[1],place[2],place[3]);
    printf("\t\t\t__  __  __\n");
    printf("\t\t\t%c | %c | %c\n",place[4],place[5],place[6]);
    printf("\t\t\t__  __  __\n");
    printf("\t\t\t%c | %c | %c\n",place[7],place[8],place[9]);
}

int check(){
    if(place[1]==place[2] && place[2]==place[3]){
        return 1;
    }else if(place[4]==place[5] && place[5]==place[6]){
        return 1;
    }else if(place[7]==place[8] && place[8]==place[9]){
        return 1;
    }else if(place[1]==place[4] && place[4]==place[7]){
        return 1;
    }else if(place[2]==place[5] && place[5]==place[8]){
        return 1;
    }else if(place[3]==place[6] && place[6]==place[9]){
        return 1;
    }else if(place[1]==place[5] && place[5]==place[9]){
        return 1;
    }else if(place[3]==place[5] && place[5]==place[7]){
        return 1;
    }else if(place[1]!='1' && place[2]!='2' && place[3]!='3' && place[4]!='4' && place[5]!='5' && place[6]!='6' && place[7]!='7' && place[8]!='8' && place[9]!='9'){
        return 0;
    }else {
        return -1;
    }

}

int main(){
 int player =1;
 char take;
 int choice;

board();
 while(1){


    printf("Player-%d ->",player);
    scanf("%d",&choice);

    if(player==1){
        take='X';
    }else{
        take='O';
    }
    if(choice==1 && place[1]=='1'){
        place[choice]=take;
    }else if(choice==2 && place[2]=='2'){
        place[choice]=take;
    }else if(choice==3 && place[3]=='3'){
        place[choice]=take;
    }else if(choice==4 && place[4]=='4'){
        place[choice]=take;
    }else if(choice==5 && place[5]=='5'){
        place[choice]=take;
    }else if(choice==6 && place[6]=='6'){
        place[choice]=take;
    }else if(choice==7 && place[7]=='7'){
        place[choice]=take;
    }else if(choice==8 && place[8]=='8'){
       place[choice]=take;
    }else if(choice==9 && place[9]=='9'){
        place[choice]=take;
    }
    int ch=check();

    if(ch==1){
        board();
        printf("Player-%d wins\n",player);
        break;
    }else if(ch==0){
        board();
        printf("Game draws");
        break;
    }else {
         board();
        if(player==1){
            player=2;
        }else{
            player=1;
        }
    }
 }

}
