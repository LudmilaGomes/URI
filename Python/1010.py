class Part():
    def __init__(self):
        self.code = None
        self.amount = None
        self.value_uni = None

part1 = Part()
part2 = Part()

part1.code, part1.amount, part1.value_uni = input().split()
part2.code, part2.amount, part2.value_uni = input().split()

part1.code, part1.amount, part1.value_uni = int(part1.code), int(part1.amount), float(part1.value_uni)
part2.code, part2.amount, part2.value_uni = int(part2.code), int(part2.amount), float(part2.value_uni)

total_value = float(part1.amount * part1.value_uni) + float(part2.amount * part2.value_uni)

print('VALOR A PAGAR: R$ %.2f' % total_value)