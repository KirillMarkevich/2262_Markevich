def every_other(seq):
    it = iter(seq)
    while True:
        try:
            yield next(it)
            next(it)
        except StopIteration:
            return