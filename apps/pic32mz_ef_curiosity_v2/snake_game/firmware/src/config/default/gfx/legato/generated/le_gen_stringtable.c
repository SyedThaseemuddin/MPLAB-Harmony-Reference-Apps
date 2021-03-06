#include "gfx/legato/generated/le_gen_assets.h"

/*****************************************************************************
 * Legato String Table
 * Encoding        ASCII
 * Language Count: 2
 * String Count:   10
 *****************************************************************************/

/*****************************************************************************
 * string table data
 * 
 * this table contains the raw character data for each string
 * 
 * unsigned short - number of indices in the table
 * unsigned short - number of languages in the table
 * 
 * index array (size = number of indices * number of languages
 * 
 * for each index in the array:
 *   unsigned byte - the font ID for the index
 *   unsigned byte[3] - the offset of the string codepoint data in
 *                      the table
 * 
 * string data is found by jumping to the index offset from the start
 * of the table
 * 
 * string data entry:
 *     unsigned short - length of the string in bytes (encoding dependent)
 *     codepoint data - the string data
 ****************************************************************************/

const uint8_t stringTable_data[228] =
{
    0x0A,0x00,0x02,0x00,0x02,0x54,0x00,0x00,0xFF,0x60,0x00,0x00,0x05,0x64,0x00,0x00,
    0xFF,0x7A,0x00,0x00,0x03,0x7E,0x00,0x00,0xFF,0x86,0x00,0x00,0x02,0x8A,0x00,0x00,
    0xFF,0x8E,0x00,0x00,0x04,0x92,0x00,0x00,0xFF,0x9E,0x00,0x00,0x00,0xA2,0x00,0x00,
    0xFF,0xAC,0x00,0x00,0x02,0xB0,0x00,0x00,0xFF,0xB4,0x00,0x00,0x00,0xB8,0x00,0x00,
    0xFF,0xC2,0x00,0x00,0x04,0xC6,0x00,0x00,0xFF,0xD2,0x00,0x00,0x00,0xD6,0x00,0x00,
    0xFF,0xE0,0x00,0x00,0x0A,0x00,0x53,0x6E,0x61,0x6B,0x65,0x20,0x53,0x69,0x7A,0x65,
    0x00,0x00,0x00,0x00,0x14,0x00,0x48,0x61,0x72,0x6D,0x6F,0x6E,0x79,0x20,0x33,0x20,
    0x53,0x6E,0x61,0x6B,0x65,0x20,0x47,0x61,0x6D,0x65,0x00,0x00,0x00,0x00,0x05,0x00,
    0x4C,0x69,0x76,0x65,0x73,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x31,0x00,0x00,0x00,
    0x00,0x00,0x09,0x00,0x47,0x61,0x6D,0x65,0x20,0x57,0x6F,0x6E,0x21,0x00,0x00,0x00,
    0x00,0x00,0x07,0x00,0x4C,0x65,0x76,0x65,0x6C,0x20,0x33,0x00,0x00,0x00,0x00,0x00,
    0x01,0x00,0x31,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x4C,0x65,0x76,0x65,0x6C,0x20,
    0x32,0x00,0x00,0x00,0x00,0x00,0x0A,0x00,0x47,0x61,0x6D,0x65,0x20,0x4F,0x76,0x65,
    0x72,0x21,0x00,0x00,0x00,0x00,0x07,0x00,0x4C,0x65,0x76,0x65,0x6C,0x20,0x31,0x00,
    0x00,0x00,0x00,0x00,
};

/* font asset pointer list */
leFont* fontList[6] =
{
    (leFont*)&Level_label_font,
    (leFont*)&NotoMono_Regular,
    (leFont*)&Snake_size_text,
    (leFont*)&Snake_life_label,
    (leFont*)&Game_Over_label,
    (leFont*)&Game_title_font,
};

const leStringTable stringTable =
{
    {
        LE_STREAM_LOCATION_ID_INTERNAL, // data location id
        (void*)stringTable_data, // data address pointer
        228, // data size
    },
    (void*)stringTable_data, // string table data
    fontList, // font lookup table
    LE_STRING_ENCODING_ASCII // encoding standard
};


// string list
leTableString string_Snake_Size_text;
leTableString string_Game_title_label;
leTableString string_Snake_Lifes_label;
leTableString string_Snake_size_value_level_1;
leTableString string_Game_Won_Text;
leTableString string_Level3;
leTableString string_Snake_size_value_level_2;
leTableString string_Level2;
leTableString string_Game_Over_Text;
leTableString string_Level1;

void initializeStrings(void)
{
    leTableString_Constructor(&string_Snake_Size_text, stringID_Snake_Size_text);
    leTableString_Constructor(&string_Game_title_label, stringID_Game_title_label);
    leTableString_Constructor(&string_Snake_Lifes_label, stringID_Snake_Lifes_label);
    leTableString_Constructor(&string_Snake_size_value_level_1, stringID_Snake_size_value_level_1);
    leTableString_Constructor(&string_Game_Won_Text, stringID_Game_Won_Text);
    leTableString_Constructor(&string_Level3, stringID_Level3);
    leTableString_Constructor(&string_Snake_size_value_level_2, stringID_Snake_size_value_level_2);
    leTableString_Constructor(&string_Level2, stringID_Level2);
    leTableString_Constructor(&string_Game_Over_Text, stringID_Game_Over_Text);
    leTableString_Constructor(&string_Level1, stringID_Level1);
}
