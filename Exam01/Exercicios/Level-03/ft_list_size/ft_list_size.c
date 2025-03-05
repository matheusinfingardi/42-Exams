#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
    int     count = 0;

    while(begin_list)
    {
        begin_list = begin_list->next;
        count++;
    }
    return (count);
}


#include <stdio.h>

int main()
{
    t_list node1, node2, node3;
    
    int a = 10, b = 20, c = 30;
    node1.data = (void *)&a;
    node1.next = &node2;

    node2.data = (void *)&b;
    node2.next = &node3;

    node3.data = (void *)&c;
    node3.next = NULL;

    printf("Tamanho da lista: %d\n", ft_list_size(&node1));

    return 0;
}