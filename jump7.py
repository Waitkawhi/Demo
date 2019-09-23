for num in range(1,101):
    if ((num % 7 == 0) or ('7' in str(num))):
        continue
    else:
        print(num)
