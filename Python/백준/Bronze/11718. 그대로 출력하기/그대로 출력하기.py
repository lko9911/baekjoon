while True:
    try:
        Str = input()
        if Str == '':
            break
        print(Str)
    except EOFError:
        break