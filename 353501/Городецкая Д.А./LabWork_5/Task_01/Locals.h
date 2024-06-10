#ifndef LOCALS_H
#define LOCALS_H

#include <QVector>
#include <QMap>
#include <QSet>

enum Local{FRA, GER, ARA, BEL, HEB, CHN};

const QVector<QVector<QString>> keys = {
    {
        "²",
        "&",
        "é",
        "\"",
        "'",
        "(",
        "-",
        "è",
        "_",
        "ç",
        "à",
        ")",
        "=",
        "a",
        "z",
        "e",
        "r",
        "t",
        "y",
        "u",
        "i",
        "o",
        "p",
        "^",
        "$",
        "*",
        "q",
        "s",
        "d",
        "f",
        "g",
        "h",
        "j",
        "k",
        "l",
        "m",
        "ù",
        "w",
        "x",
        "c",
        "v",
        "b",
        "n",
        ",",
        ";",
        ":",
        "!",
        " "
    },
    {
        "^",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "ß",
        "´",
        "q",
        "w",
        "e",
        "r",
        "t",
        "z",
        "u",
        "i",
        "o",
        "p",
        "ü",
        "+",
        "#",
        "a",
        "s",
        "d",
        "f",
        "g",
        "h",
        "j",
        "k",
        "l",
        "ö",
        "ä",
        "y",
        "x",
        "c",
        "v",
        "b",
        "n",
        "m",
        ",",
        ".",
        "-",
        " "
    },
    {
        "ذ",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "ض",
        "ص",
        "ث",
        "ق",
        "ف",
        "غ",
        "ع",
        "ه",
        "خ",
        "ح",
        "ج",
        "د",
        "\\",
        "ش",
        "س",
        "ي",
        "ب",
        "ل",
        "ا",
        "ت",
        "ن",
        "م",
        "ك",
        "ط",
        "ئ",
        "ء",
        "ؤ",
        "ر",
        "ﻻ",
        "ى",
        "ة",
        "و",
        "ز",
        "ظ",
        " "
    },
    {
        "ё",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "й",
        "ц",
        "у",
        "к",
        "е",
        "н",
        "г",
        "ш",
        "ў",
        "з",
        "х",
        "'",
        "\\",
        "ф",
        "ы",
        "в",
        "а",
        "п",
        "р",
        "о",
        "л",
        "д",
        "ж",
        "э",
        "я",
        "ч",
        "с",
        "м",
        "і",
        "т",
        "ь",
        "б",
        "ю",
        ".",
        " "
    },
    {
        ";",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "/",
        "'",
        "ק",
        "ר",
        "א",
        "ט",
        "ו",
        "ן",
        "ם",
        "פ",
        "]",
        "[",
        "\\",
        "ש",
        "ד",
        "ג",
        "כ",
        "ע",
        "י",
        "ח",
        "ל",
        "ך",
        "ף",
        ",",
        "ז",
        "ס",
        "ב",
        "ה",
        "נ",
        "מ",
        "צ",
        "ת",
        "ץ",
        ".",
        " "
    },
    {
        "·",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "去",
        "我",
        "俄",
        "俄",
        "人",
        "他",
        "一",
        "u",
        "p",
        "哦",
        "篇",
        "【",
        "】",
        "、",
        "阿",
        "所",
        "的",
        "发",
        "个",
        "华",
        "就",
        "可",
        "了",
        "；",
        "‘",
        "在",
        "下",
        "从",
        "v",
        "不",
        "你",
        "们",
        "，",
        "。",
        " ",
        " ",
    }
};

const QVector<QSet<QString>> allowedSimbols = {
    {
        "²",
        "&",
        "é",
        "\"",
        "'",
        "(",
        "-",
        "è",
        "_",
        "ç",
        "à",
        ")",
        "=",
        "a",
        "z",
        "e",
        "r",
        "t",
        "y",
        "u",
        "i",
        "o",
        "p",
        "^",
        "$",
        "*",
        "q",
        "s",
        "d",
        "f",
        "g",
        "h",
        "j",
        "k",
        "l",
        "m",
        "ù",
        "w",
        "x",
        "c",
        "v",
        "b",
        "n",
        ",",
        ";",
        ":",
        "!",
        " "
    },
    {
        "^",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "ß",
        "´",
        "q",
        "w",
        "e",
        "r",
        "t",
        "z",
        "u",
        "i",
        "o",
        "p",
        "ü",
        "+",
        "#",
        "a",
        "s",
        "d",
        "f",
        "g",
        "h",
        "j",
        "k",
        "l",
        "ö",
        "ä",
        "y",
        "x",
        "c",
        "v",
        "b",
        "n",
        "m",
        ",",
        ".",
        "-",
        " "
    },
    {
        "ذ",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "ض",
        "ص",
        "ث",
        "ق",
        "ف",
        "غ",
        "ع",
        "ه",
        "خ",
        "ح",
        "ج",
        "د",
        "\\",
        "ش",
        "س",
        "ي",
        "ب",
        "ل",
        "ا",
        "ت",
        "ن",
        "م",
        "ك",
        "ط",
        "ئ",
        "ء",
        "ؤ",
        "ر",
        "ﻻ",
        "ى",
        "ة",
        "و",
        "ز",
        "ظ",
        " "
    },
    {
        "ё",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "й",
        "ц",
        "у",
        "к",
        "е",
        "н",
        "г",
        "ш",
        "ў",
        "з",
        "х",
        "'",
        "\\",
        "ф",
        "ы",
        "в",
        "а",
        "п",
        "р",
        "о",
        "л",
        "д",
        "ж",
        "э",
        "я",
        "ч",
        "с",
        "м",
        "і",
        "т",
        "ь",
        "б",
        "ю",
        ".",
        " "
    },
    {
        ";",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "/",
        "'",
        "ק",
        "ר",
        "א",
        "ט",
        "ו",
        "ן",
        "ם",
        "פ",
        "]",
        "[",
        "\\",
        "ש",
        "ד",
        "ג",
        "כ",
        "ע",
        "י",
        "ח",
        "ל",
        "ך",
        "ף",
        ",",
        "ז",
        "ס",
        "ב",
        "ה",
        "נ",
        "מ",
        "צ",
        "ת",
        "ץ",
        ".",
        " "
    },
    {
        "·",
        "1",
        "2",
        "3",
        "4",
        "5",
        "6",
        "7",
        "8",
        "9",
        "0",
        "-",
        "=",
        "去",
        "我",
        "俄",
        "俄",
        "人",
        "他",
        "一",
        "u",
        "p",
        "哦",
        "篇",
        "【",
        "】",
        "、",
        "阿",
        "所",
        "的",
        "发",
        "个",
        "华",
        "就",
        "可",
        "了",
        "；",
        "‘",
        "在",
        "下",
        "从",
        "v",
        "不",
        "你",
        "们",
        "，",
        "。",
        " ",
        " ",
    }
};

const QMap<int, int> codeSymbolNumber =
    {
        {49, 0},
        {10, 1},
        {11, 2},
        {12, 3},
        {13, 4},
        {14, 5},
        {15, 6},
        {16, 7},
        {17, 8},
        {18, 9},
        {19, 10},
        {20, 11},
        {21, 12},
        {24, 13},
        {25, 14},
        {26, 15},
        {27, 16},
        {28, 17},
        {29, 18},
        {30, 19},
        {31, 20},
        {32, 21},
        {33, 22},
        {34, 23},
        {35, 24},
        {51, 25},
        {38, 26},
        {39, 27},
        {40, 28},
        {41, 29},
        {42, 30},
        {43, 31},
        {44, 32},
        {45, 33},
        {46, 34},
        {47, 35},
        {48, 36},
        {52, 37},
        {53, 38},
        {54, 39},
        {55, 40},
        {56, 41},
        {57, 42},
        {58, 43},
        {59, 44},
        {60, 45},
        {61, 46},
        {100, 47}
};

#endif // LOCALS_H
