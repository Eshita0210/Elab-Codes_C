#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
char str[1000005];
char temp[10];
struct trie
{   struct trie* child[36];
    int value;
    bool set;};
struct trie* newnode()
{   int i;
    struct trie* node=(struct trie*)malloc(sizeof(struct trie));
    for(i=0;i<36;i++)
        node->child[i]=NULL;
    node->value=-1;
    node->set=false;
    return node;}
void lookup(struct trie * root,char *str)
{  int i,len=strlen(str),flag,flag1;
    struct trie* head=root,*head2;
    for(i=0;i<len;i++)
    {     if((str[i]-'0')<10&&(str[i]-'0')>=0)
        {       if(head->child[str[i]-'0']==NULL)
            {       head->child[str[i]-'0']=newnode();    }
            head=head->child[str[i]-'0'];        }
        else
        { if(head->child[str[i]-'a'+10]==NULL)
            {            head->child[str[i]-'a'+10]=newnode();   }
            head=head->child[str[i]-'a'+10];        }    }
    flag=1;
    while(head->value>=0&&flag)
    {    flag=1;
        head2=head;
        snprintf(temp,2,"%d",head->value);
        for(i=0;i<strlen(temp);i++)
        {           if(head2->child[temp[i]-'0']==NULL){
            head2->child[temp[i]-'0']=newnode();
            flag=0;        }
            head2=head2->child[temp[i]-'0'];        }
        if(flag&&head2->set==true)
            head->value++;
        else{
        head2->value++;
        flag=0;        }    }
    flag1=1;
    if(flag==0){
    printf("%d",head->value);
    head2->set=true;
    flag1=0;   }
    head->value++;
    if(flag1)
        head->set=true;
    printf("\n");}
int main()
{   int test;
    struct trie *root=newnode();
    scanf("%d",&test);
    while(test--)
    {  scanf("%s",str);
        printf("%s",str);
        lookup(root,str);
    }   return 0;}
