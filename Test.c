//
// Created by sj on 2023/3/6.
//

#include <stdio.h>
#include <stdlib.h>

#define SDS_HDR_VAR(T, s) struct sdshdr##T *sh = (struct sdshdr##T *)((s)-(sizeof(struct sdshdr##T)));


struct sdshdr8 {
    u_int32_t len;
    u_int32_t alloc;
    char buf[];
};


int main() {

    int initlen = 10;
    void *mash = malloc(sizeof(struct sdshdr8) + initlen + 1);

    SDS_HDR_VAR(8, mash)
    sh->len = 2;
    sh->alloc = 3;

    printf("%ld \n\r", sizeof(char));
}

