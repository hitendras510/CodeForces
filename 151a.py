n, k, l, c, d, p, nl, np = map(int, input().split())

drink= (k*l)//nl
lime= c*d
salt= p//np

total_toast=min(drink,lime,salt)
print(total_toast//n)