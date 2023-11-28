#include<stdio.h>
#include<stdlib.h>

char change(char in){
    char out;

    switch(in){
        case 97 :
            out = 122;
            break;
        case 98 :
            out = 121;
            break;
        case 99 :
            out = 120;
            break;
        case 100 :
            out = 119;
            break;
        case 101 :
            out = 118;
            break;
        case 102 :
            out = 117;
            break;
        case 103 :
            out = 116;
            break;
        case 104 :
            out = 115;
            break;
        case 105 :
            out = 114;
            break;
        case 106 :
            out = 113;
            break;
        case 107 :
            out = 112;
            break;
        case 108 :
            out = 111;
            break;
        case 109 :
            out = 110;
            break;
        case 110 :
            out = 109;
            break;
        case 111 :
            out = 108;
            break;
        case 112 :
            out = 107;
            break;
        case 113 :
            out = 106;
            break;
        case 114 :
            out = 105;
            break;
        case 115 :
            out = 104;
            break;
        case 116 :
            out = 103;
            break;
        case 117 :
            out = 102;
            break;
        case 118 :
            out = 101;
            break;
        case 119 :
            out = 100;
            break;
        case 120 :
            out = 99;
            break;
        case 121 :
            out = 98;
            break;
        case 122 :
            out = 97;
            break;
        default:
            out=in;
            break;
    }

    return out;
}

int main(){
    char word[10];
    int i;
    int len = (int) sizeof(word)/sizeof(char);

    gets(word);
    printf("\n Word: %s", word);

    for (i = len-1; i >= 0; i--){
        word[i] = change(word[i]);
    }

    printf("\n change word : %s", word);
}
