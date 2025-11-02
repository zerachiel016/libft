/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zdadsi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:45:33 by zdadsi            #+#    #+#             */
/*   Updated: 2025/11/02 08:18:20 by zdadsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
    t_list *nu_lst;
    t_list *nu_lst_head = NULL;

    while (lst) {
        nu_lst = ft_lstnew(f(lst->content));
        if (!nu_lst) {
            ft_lstclear(&nu_lst_head, del);
            return NULL;
        }
        ft_lstadd_back(&nu_lst_head, nu_lst);

        lst = lst->next;
    }

    return nu_lst_head;
}
