/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omsanfor <omsanfor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:59:28 by omsanfor          #+#    #+#             */
/*   Updated: 2022/10/13 14:59:29 by omsanfor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

void
	init_ray(t_info *info, int i, int j)
{
	info->ray.posX = i + 0.5;
	info->ray.posY = j + 0.5;
	info->ray.dirX = 0;
	info->ray.dirY = 0;
	info->ray.planeX = 0;
	info->ray.planeY = 0;
}

void
	player_pos(t_info *info, int i, int j)
{
	info->ray.posX = i + 0.5;
	info->ray.posY = j + 0.5;
	if (info->map[i][j] == 'E')
	{
		info->ray.dirY = 1;
		info->ray.planeX = 0.66;
	}
	else if (info->map[i][j] == 'W')
	{
		info->ray.dirY = -1;
		info->ray.planeX = -0.66;
	}
	else if (info->map[i][j] == 'S')
	{
		info->ray.dirX = 1;
		info->ray.planeY = -0.66;
	}
	else if (info->map[i][j] == 'N')
	{
		info->ray.dirX = -1;
		info->ray.planeY = 0.66;
	}
}
