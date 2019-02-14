example = [
  [ 1, 1, 0.3, 1 ],
  [ 1, 0.4, 0.5, 1 ],
  [ 1, 0.7, 0.8, 0 ]
]

w = [ 0, 0, 0 ]

perfect = False

while not perfect:
  perfect = True

  for e in example:
    print ("example: ",e)
    dot = e[0]*w[0] + e[1]*w[1] + e[2]*w[2]
    print("dot ",dot)
    print("predict",int(dot > 0))
    predict = int(dot > 0)
    target = e[3]

    if predict != target:
      perfect = False

      if predict == 0:
        w[0] = w[0] + e[0]
        w[1] = w[1] + e[1]
        w[2] = w[2] + e[2]
      else:
        w[0] = w[0] - e[0]
        w[1] = w[1] - e[1]
        w[2] = w[2] - e[2]
      print("weight ", w )
      print()
    else:
        print ("OK")
        print ()
print ("Final anwer", w)
