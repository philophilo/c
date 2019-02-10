#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct node{
    int value;
    struct node *next_ptr;
};

struct node *head;

void add_node(int data);
void print_nodes(void);

int main(int argc, char *argv[]){
    int c;
    long *node_value;
    char *ptr;
    char *token;
    const char s[2] = " ";

    while((c = getopt(argc, argv, "pa:")) != EOF){
        switch(c){
            case 'p':
                print_nodes();
                break;
            case 'a':
                /* split the string*/
                token = strtok(optarg, s);
                while(token != NULL){
                    // convert each string to integer
                    node_value = strol(token, &ptr, 10);
                    // if its not on a newline or null the invalid input
                    if((*ptr) != 10 && (*ptr) != 0 ){
                        fprintf(stderr, "Invalid number: %c", *ptr);
                        exit(EXIT_FAILURE)
                    }
                    add_node(node_value);
                    token = strtok(NULL, s);
                }
                break;
            default:
                fprintf(stderr, "Unknown option %c, avaliable options are '-p' and 'a'", c);
                break;
        }
        argc -= optind;
        argv += optind;

        return 0;
    }

    void add_node(int data){
        struct node *temp = head;
        if(temp == NULL){
            head = ma
        }
    }
}
