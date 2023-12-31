/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-d <tcosta-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 00:47:15 by tcosta-d          #+#    #+#             */
/*   Updated: 2023/08/23 00:47:15 by tcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
		return (0);
	stack_a = ft_read_args(argc, argv, stack_a);
	if (!stack_a)
	{
		ft_free_stack(stack_a);
		ft_error();
	}
	ft_sort_stack(stack_a);
	ft_free_stack(stack_a);
	return (0);
}
