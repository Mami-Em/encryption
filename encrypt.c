#include <cs50.h>
#include <stdio.h>
#include <string.h>

// to do
// -> get integer instead of string at the beginning

void encrypt(char *val, int secret_key) {
    char new_val[strlen(val)];
    for (int i = 0; i < strlen(val); i++)
    {
        if (val[i] == 32)
        {
            new_val[i] = 32;
            printf("there is a space\n");
        } else {
            new_val[i] = val[i]-secret_key;
        }
    }
    printf("Encrypted version: %s\n", new_val);
}

int main(int argc, string anarana[]) {
    // check if the insertion is an integer
    if(strcmp(anarana[1], "12") != 0)
    {
        printf("Please insert a valid key number!\n");
        return 1;
    }
    int secret_key = 12;
    string to_encrypt = get_string("Type the word OR text to encrypt: ");
    encrypt(to_encrypt, secret_key);
    return 0;
}