

#include "structs.h"

int ft_free(int *row_or_column)
{
    if (row_or_column)
        free(row_or_column);
    return (0);
}

void extract_col(t_game *ft_struct, int column, int *row_or_column)
{
    int i;

    i = 0;
    while (i < ft_struct->n)
    {
        row_or_column[i] = ft_struct->mat_base[i][column];
        i++;
    }
}

int building_count(int *row_or_column, int size)
{
    int max_seen;
    int buildings;
    int i;

    i = 0;
    max_seen = 0;
    buildings = 0;
    while (i < size)
    {
        if (row_or_column[i] > max_seen)
        {
            max_seen = row_or_column[i];
            buildings++;
        }
        i++;
    }
    return (buildings);
}

int building_count_rev(int *row_or_column, int size)
{
    int max_seen;
    int buildings;
    int i;

    i = size - 1;
    max_seen = 0;
    buildings = 0;
    while (i >= 0)
    {
        if (row_or_column[i] > max_seen)
        {
            max_seen = row_or_column[i];
            buildings++;
        }
        i--;
    }
    return (buildings);
}

int	verify_buildings_visibles(t_game *ft_struct, int raw, int column)
{
	int	buildings;
	int	*row_or_column;

	row_or_column = (int *)malloc(ft_struct->n * sizeof(int));
	if (row_or_column == NULL)
		return (ft_free(row_or_column));
	extract_col(ft_struct, column, row_or_column);
	buildings = building_count(row_or_column, ft_struct->n);
	if (buildings > ft_struct->mat_bis.col_1[column])
		return (ft_free(row_or_column));
	buildings = building_count_rev(row_or_column, ft_struct->n);
	if (buildings > ft_struct->mat_bis.col_2[column])
		return (ft_free(row_or_column));
	buildings = building_count(ft_struct->mat_base[raw], ft_struct->n);
	if (buildings > ft_struct->mat_bis.row_1[raw])
		return (ft_free(row_or_column));
	buildings = building_count_rev(ft_struct->mat_base[raw], ft_struct->n);
	if (buildings > ft_struct->mat_bis.row_2[raw])
		return (ft_free(row_or_column));
	free(row_or_column);
	return (1);
}
