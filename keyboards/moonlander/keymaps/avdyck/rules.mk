# This will cause the final step to take longer, but should get you a smaller compiled size.
# This also disables Action Functions, and Action Macros, both of which are deprecated.
# This will get you the most savings, in most situations.
LTO_ENABLE = yes

# minimal size
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
MOUSEKEY_ENABLE = no
EXTRAKEY_ENABLE = no
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

# media keys & macros
EXTRAKEY_ENABLE = yes
DYNAMIC_MACRO_ENABLE = yes

# combos
COMBO_ENABLE = yes
VPATH += keyboards/gboards

# caps word
CAPS_WORD_ENABLE = yes

SRC = matrix.c
SRC += keydefs.c
SRC += ledmap.c
