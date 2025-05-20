# 💧 Projet Piscine 42 - README Complet

Bienvenue dans mon dépôt Git contenant l'ensemble des travaux réalisés durant la Piscine de 42. Cette formation intensive m'a permis d'approfondir mes compétences en langage C, en scripting shell ainsi qu'en manipulation de fichiers et d'algorithmes fondamentaux. Vous trouverez ici un panorama complet des exercices classés par dossier, avec une description claire de chaque objectif.

> 💡 Certains rushs n'ont pas été validés à 100%, mais ils illustrent tout de même ma progression durant cette période.

---

## Arborescence complète

```
Piscine/
├── Shell00/
│   ├── ex01/print_groups.sh
│   ├── ex02/command_2.sh
│   └── ...
├── Shell01/
│   ├── ex01/print_groups.sh
│   ├── ex02/find_sh.sh
│   ├── ex03/count_files.sh
│   └── ex04/MAC.sh
├── C00/
│   ├── ex00/ft_putchar.c
│   ├── ex01/ft_print_alphabet.c
│   ├── ex03/ft_print_numbers.c
├── C01/
│   ├── ex00/ft_ft.c
│   ├── ex01/ft_ultimate_ft.c
│   ├── ex02/ft_swap.c
│   ├── ex03/ft_div_mod.c
│   ├── ex04/ft_ultimate_div_mod.c
│   ├── ex05/ft_putstr.c
│   ├── ex06/ft_strlen.c
│   ├── ex07/ft_rev_int_tab.c
│   └── ex08/ft_short_int_tab.c
├── C02/
│   ├── .vscode/settings.json
│   ├── ex00/ft_strcpy.c
│   ├── ex01/ft_strncpy.c
│   ├── ex02/ft_str_is_alpha.c
│   ├── ex03/ft_str_is_numeric.c
│   ├── ex04/ft_str_is_lowercase.c
│   ├── ex05/ft_str_is_uppercase.c
│   ├── ex06/ft_str_is_printable.c
│   ├── ex07/ft_strupcase.c
│   ├── ex08/ft_strlowcase.c
│   ├── ex09/ft_strcapitalize.c
│   ├── ex10/ft_strlcpy.c
│   └── ex11/ft_putstr_non_printable.c
├── C03/
│   ├── ex00/ft_strcmp.c
│   ├── ex01/ft_strncmp.c
│   ├── ex02/ft_strcat.c
│   ├── ex03/ft_strncat.c
│   ├── ex04/ft_strstr.c
│   └── ex05/ft_strlcat.c
├── C04/
│   ├── ex00/ft_strlen.c
│   ├── ex01/ft_putstr.c
│   ├── ex02/ft_putnbr.c
│   ├── ex03/ft_atoi.c
│   ├── ex04/ft_putnbr_base.c
│   └── ex05/ft_atoi_base.c
├── C05/
│   ├── ex00/ft_iterative_factorial.c
│   ├── ex01/ft_recursive_factorial.c
│   ├── ex02/ft_iterative_power.c
│   ├── ex03/ft_recursive_power.c
│   ├── ex04/ft_fibonacci.c
│   ├── ex05/ft_sqrt.c
│   ├── ex06/ft_is_prime.c
│   ├── ex07/ft_find_next_prime.c
│   └── ex08/ft_ten_queens_puzzle.c
├── C06/
│   ├── ex00/ft_print_program_name.c
│   ├── ex01/ft_print_params.c
│   ├── ex01/a.out
│   ├── ex02/ft_rev_params.c
│   ├── ex02/a.out
│   └── ex03/ft_sort_params.c
├── C07/
│   ├── ex00/ft_strdup.c
│   ├── ex01/ft_range.c
│   ├── ex02/ft_ultimate_range.c
│   ├── ex03/ft_strjoin.c
│   ├── ex04/ft_convert_base.c
│   ├── ex04/ft_convert_base2.c
│   ├── ex05/ft_split.c
│   └── ex05/a.out
├── C08/
│   ├── ex00/ft.h
│   ├── ex01/ft_boolean.h
│   ├── ex02/ft_abs.h
│   ├── ex03/ft_point.h
│   ├── ex04/ft_strs_to_tab.c
│   └── ex05/ft_show_tab.c
├── C09/
│   ├── ex00/ft_putchar.c
│   ├── ex00/ft_putstr.c
│   ├── ex00/ft_strcmp.c
│   ├── ex00/ft_strlen.c
│   ├── ex00/ft_swap.c
│   ├── ex00/libft_creator.sh
│   ├── ex01/Makefile
│   ├── ex01/srcs/ft_putchar.c
│   ├── ex01/srcs/ft_putstr.c
│   ├── ex01/srcs/ft_strcmp.c
│   ├── ex01/srcs/ft_strlen.c
│   └── ex01/srcs/ft_swap.c
│   └── ex02/ft_split.c
├── C10/
│   ├── ex00/file_reader.c
│   ├── ex00/Makefile
│   ├── ex00/test.txt
│   ├── ex01/ft_cat.c
│   ├── ex01/Makefile
│   ├── ex01/test.txt
│   ├── ex02/ft_error.c
│   ├── ex02/ft_tail.c
│   ├── ex02/ft_tail.h
│   ├── ex02/Makefile
│   └── ex02/test.txt
├── C11/
│   ├── .vscode/settings.json
│   ├── ex00/ft_foreach.c
│   ├── ex01/ft_map.c
│   ├── ex02/ft_any.c
│   ├── ex03/ft_count_if.c
│   └── ex04/ft_is_sort.c
├── Rush00/
│   └── (fichiers du projet rush00...)
├── Rush01/
│   └── (fichiers du projet rush01...)
```

---

Chaque dossier correspond à un niveau progressif dans l'apprentissage de la programmation en C et des outils Unix/Linux.

---

## 🔍 Détail des Exercices C

### C00 - Fonctions de Base 🧱

Objectif : maîtriser l'affichage à l'écran avec des fonctions simples.

* `ft_putchar.c` : affiche un caractère à l'aide de `write`.
* `ft_print_alphabet.c` : affiche l'alphabet de 'a' à 'z'.
* `ft_print_numbers.c` : affiche les chiffres de 0 à 9.

### C01 - Pointeurs et Variables 🔄

Objectif : comprendre les pointeurs, les manipulations mémoires simples.

* `ft_ft.c` / `ft_ultimate_ft.c` : initialisation via pointeurs.
* `ft_swap.c` : échange deux variables.
* `ft_div_mod.c` : renvoie quotient et reste.
* `ft_ultimate_div_mod.c` : version via pointeurs.
* `ft_putstr.c` / `ft_strlen.c` : afficher une chaîne et calculer sa longueur.
* `ft_rev_int_tab.c` / `ft_short_int_tab.c` : inverser/trier un tableau.

### C02 - Manipulations de Chaînes ✏️

Objectif : recréer les fonctions de base de `<string.h>`.

* `ft_strcpy`, `ft_strncpy` : copier une chaîne.
* `ft_str_is_*` : tests de validation : alphabet, numérique, majuscule, etc.
* `ft_strupcase`, `ft_strlowcase`, `ft_strcapitalize` : modifier la casse.
* `ft_strlcpy`, `ft_putstr_non_printable` : copie sécurisée, affichage ascii.

### C03 - Fonctions Avancées 🧪

Objectif : concaténer, comparer et rechercher des sous-chaînes.

* `ft_strcmp`, `ft_strncmp` : comparaison de chaînes.
* `ft_strcat`, `ft_strncat` : concaténation.
* `ft_strstr` : recherche d'une sous-chaîne.
* `ft_strlcat` : concaténation sécurisée.

### C04 - Conversion et Affichage 🔢

Objectif : comprendre les conversions entre types.

* `ft_putnbr` : afficher un entier.
* `ft_atoi` : convertir une chaîne en entier.
* `ft_putnbr_base`, `ft_atoi_base` : gérer les conversions entre systèmes de base.

### C05 - Récursivité et Math ♻️

Objectif : aborder les algorithmes récursifs.

* Factorielle : version itérative et récursive.
* Puissance : version itérative et récursive.
* `ft_fibonacci`, `ft_sqrt`, `ft_is_prime` : nombres mathématiques.
* `ft_ten_queens_puzzle` : algorithmie avancée via backtracking.

### C06 - Arguments en Ligne de Commande 🧾

Objectif : comprendre les paramètres du `main()`.

* Affichage du nom du programme, des arguments, dans l'ordre ou triés.

### C07 - Allocation Dynamique 🧠

Objectif : manipulation de la mémoire dynamique avec `malloc`.

* `ft_strdup`, `ft_range`, `ft_ultimate_range` : duplication et création de tableaux.
* `ft_strjoin`, `ft_convert_base`, `ft_split` : manipulation de chaînes via `malloc`.

### C08 - Structures et Headers 📦

Objectif : introduire les types personnalisés et fichiers `.h`.

* Création de structures, types booléens, macros.
* Affichage de tableaux de structures.

### C09 - Lib Création & Makefile 🏗️

Objectif : centraliser ses fonctions en une bibliothèque.

* `libft_creator.sh`, `Makefile`, architecture `srcs/`

### C10 - Gestion de Fichiers 🗃️

Objectif : maîtriser `open`, `read`, `close`, gestion d'erreurs.

* `ft_cat` : lire et afficher un fichier.
* `ft_tail` : n'afficher que la fin.
* `ft_error` : gestion d'exceptions.

### C11 - Pointeurs de Fonction 🔗

Objectif : manipuler les fonctions comme arguments.

* `ft_foreach`, `ft_map`, `ft_any`, `ft_count_if`, `ft_is_sort`

---

## ⚙️ Compilation et Exécution

Pour compiler un fichier C :

```bash
gcc -Wall -Wextra -Werror ex0X/ft_XXX.c -o test
```

Pour compiler la lib :

```bash
cd C09/ex01
make
```

---

## 📝 Remarques Supplémentaires

* ✅ Les fichiers `*.out` sont correctement ignorés via `.gitignore`
* ❌ Les fichiers `.vscode/` ont été retirés
* ⚠️ Certains Makefiles exigent une arborescence rigoureuse

---

## 🏁 Conclusion

Cette piscine a été une expérience intense et enrichissante. Elle m’a permis d’acquérir rigueur, autonomie, et de solides bases en programmation bas-niveau. Chaque exercice a renforcé ma compréhension des pointeurs, de la gestion mémoire et de la structure des programmes C. J'en ressors mieux préparé pour aborder des projets plus complexes et collaboratifs.

Merci pour votre lecture ! 🙏

---

