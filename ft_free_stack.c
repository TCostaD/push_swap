/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <tcosta-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:44:53 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/08/28 20:44:53 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_stack(t_stack *stack)
{
    t_stack	*tmp;

    while (stack)
    {
        tmp = stack->next;
        free(stack);
        stack = tmp;
    }
}
