/*
** EPITECH PROJECT, 2022
** B-MUL-200-NCY-2-1-myrpg-thomas.dehennault
** File description:
** my_rpg
*/

#include "../include/my_rpg.h"

void init_window(rpg_t *defd)
{
    defd->wind->video_mode.width = 1980;
    defd->wind->video_mode.height = 1050;
    defd->wind->video_mode.bitsPerPixel = 32;
    defd->wind->window =
    sfRenderWindow_create(defd->wind->video_mode, "Dock's quest",
    sfClose, NULL);
}

int main(int ac, char **av)
{
    rpg_t *rpg = malloc(sizeof(rpg_t));
    init_window(rpg);
    while (sfRenderWindow_isOpen(rpg->wind->window)) {
        menu(rpg);
        game(rpg);
    }
}