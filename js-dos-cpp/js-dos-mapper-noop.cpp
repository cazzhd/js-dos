//
// Created by caiiiycuk on 28.02.2020.
//

#include <config.h>
#include <setup.h>
#include <mapper.h>

bool autofire = false;

void MAPPER_AddHandler(MAPPER_Handler * handler,MapKeys key,Bitu mods,char const * const eventname,char const * const buttonname) {
    printf("WARN! Mapper is not supported\n");
}

void MAPPER_Init(void) {
}

void MAPPER_StartUp(Section * sec) {
}

void MAPPER_Run(bool pressed) {
    printf("WARN! Mapper is not supported\n");
}

void MAPPER_RunInternal() {
    printf("WARN! Mapper is not supported\n");
}

void MAPPER_LosingFocus(void) {
}
