quindi funziona nel modo seguente:

# Basics
> dal basso verso l'alto

ppu!
chip specializzato affianco alla cpu (co-processore)

fixed set of graphic operations, cannot be programmed
ppu ram

- pattern tables (left, right)
> 64 kb of memory, each tile 8px by 8px, 256 sprite tiles/ table
> quindi 4 colori per pixel beh in realta' non e' una conseguenza

> questo perche'
8x8 = 64 px x 2 bits = 128 bits = 16bytes
e come lo hanno indirizzato? processore a 8 bit infatti!

scompongo 2 tabelle => 1 byte per row, dividendo bassi e alti bit


-----------------------

**nametables** -> 32 x 30
**palettes** -> 8 active palettes (4 colors each)

**obm**

[raw image data, background, which color, foreground sprites]

ci sono altre funzionalita' avanzate!

# CRT (2 styles)
original e newer (questa ha 3 colori)

- la gun si muove circa a 60fps (ricorda ntcs vs pal 17%)

# tile (ne sopporta solo 4)
ne supporta 8 palette al momento 4 bg + 4 fg
ogni palette contiene poi 4 colori :)

## Colori nella palette
indice 0 => colore della trasparenza

## Attribute tables
