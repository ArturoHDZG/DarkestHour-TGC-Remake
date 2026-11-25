##############################
# Country definition for OTT #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = OTT
  ai                 = "Minors/OTT_1914.ai"
  ai_settings        = { }
  capital            = 409 # Istanbul
  dissent            = 10
  manpower           = 38
  # Resource Reserves
  energy         = 2100
  metal          = 1050
  rare_materials = 525
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 235
  escorts        = 10

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 25 }
    relation = { tag = ENG value = -75 }
    relation = { tag = FRA value = -50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = U09 value = 25 }
    relation = {
      tag        = GRE
      value      = -25
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = ITA value = -100 }
    relation = { tag = OMN value = -35 }
    relation = { tag = PER value = -50 }
    relation = { tag = SAU value = 50 }
    relation = { tag = U50 value = -25 access = yes }
    relation = { tag = YEM value = 50 access = yes }
    relation = { tag = U53 value = -15 }
    relation = { tag = U52 value = 175 access = yes }
  }
  SpyInfo                = { country = "OTT" NumberOfSpies = 7 }

  nationalprovinces      = { 409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1071 1054 385 1062 1063 1064 1060 1061 370 384 1077 1072 1073 1055 1056 1014 1015 1016 1017 1018 1019 1020 1021 1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 1011 1010 1024 363 1009 320 328 329 333 334 359 360 361 362 364 365 366 367 369 378 379 380 382 383 750 751 752 753 755 756 757 758 759 761 762 763 764 765 767 768 771 776 }
  ownedprovinces         = { 409 1078 1079 1057 1076 1068 1074 1058 1075 1065 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 1016 1018 1019 1020 1021 1014 1017 1015 1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 1011 1010 1024 1009 320 328 329 333 334 359 360 361 362 363 364 365 366 367 369 370 378 379 380 382 383 750 751 752 753 755 756 757 758 759 761 762 763 764 765 767 768 771 776 }
  controlledprovinces    = { 409 1078 1079 1057 1076 1068 1074 1058 1075 1065 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 1016 1018 1019 1020 1021 1014 1017 1015 1036 1033 1034 1035 1037 1028 1032 1031 1030 1027 1029 1013 1023 1172 1026 1025 1022 1008 1011 1010 1024 1009 320 328 329 333 334 359 360 361 362 363 364 365 366 367 369 370 378 379 380 382 383 750 751 752 753 755 756 757 758 759 761 762 763 764 765 767 768 771 776 }
  claimedprovinces       = { 387 388 379 1004 1005 1007 1006 791 900 1046 1044 1041 1048 1049 1050 786 787 790 788 789 783 784 785 780 781 782 778 779 799 800 792 795 796 793 801 802 798 797 794 }

  techapps               = { 1010 1020 1160 1170 3010 3110 3210 3220 3410 3420 3610 3810 5800 6500 6510 8010 8020 8050 8060 8070 8100 8500 13060 13070 }
  blueprints             = { 6590 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 3
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 720001 } # Abdul Hamid II
  headofgovernment       = { type = 9 id = 720062 } # Said Halim
  foreignminister        = { type = 9 id = 720073 } # Said Halim
  armamentminister       = { type = 9 id = 720129 } # Mehmed Djavid
  ministerofsecurity     = { type = 9 id = 720147 } # Mehmed Talat
  ministerofintelligence = { type = 9 id = 720170 } # Eshref Sencer Kushdjubashi
  chiefofstaff           = { type = 9 id = 720176 } # Ahmed Izzet
  chiefofarmy            = { type = 9 id = 720194 } # Ismail Enver
  chiefofnavy            = { type = 9 id = 720228 } # Arthur Henry Limpus
  chiefofair             = { type = 9 id = 720215 } # Süreyya Ilmen
  dormant_leaders        = { 720268 720269 720271 720272 720273 720274 720275 720276 720277 720278 720279 720280 720281 720282 720283 720284 720285 720286 720287 720289 720291 720293 720295 720297 720298 720299 720300 720301 720302 720304 720305 720306 720307 720308 720310 720311 720312 720313 720314 720315 720316 720317 720318 }
  dormant_ministers      = { 720050 720054 720055 720056 720057 720058 720059 720060 720061 720068 720069 720070 720071 720072 720079 720080 720081 720082 720083 720084 720085 720086 720088 720089 720091 720095 720096 720097 720098 720099 720100 720101 720102 720103 720104 720105 720106 720107 720108 720109 720110 720111 720112 720113 720114 720115 720116 720119 720120 720121 720122 720123 720124 720125 720126 720127 720128 720130 720141 720142 720143 720144 720145 720146 720148 720149 720150 720151 720152 720153 720164 720165 720166 720167 720168 720180 720181 720182 720183 720184 720185 720186 720187 720188 720190 720191 720193 720197 720198 720199 720200 720201 720202 720203 720204 720205 720206 720207 720208 720209 720210 720211 720217 720218 720219 720220 720221 720222 720223 720224 720225 720226 720227 }
  dormant_teams          = { 720031 720032 }

  landunit = {
    id       = { type = 20111 id = 1 }
    name     = "I. Kolordu"
    location = 409
    division = {
      id             = { type = 20111 id = 2 }
      name           = "Ordu Genel Merkez"
      type           = hq
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 20111 id = 3 }
      name           = "1. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 20111 id = 4 }
      name           = "2. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 20111 id = 5 }
      name           = "3. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 20111 id = 6 }
      name           = "52. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 7 }
      name           = "54. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
    division = {
      id             = { type = 20111 id = 155 }
      name           = "123. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 20111 id = 156 }
      name           = "152. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 157 }
      name           = "154. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 8 }
    name     = "II. Kolordu"
    location = 385
    division = {
      id             = { type = 20111 id = 9 }
      name           = "I. Ordu"
      type           = hq
      model          = 0
      strength       = 50
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 10 }
      name           = "4. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 11 }
      name           = "5. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 12 }
      name           = "6. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 13 }
      name           = "19. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 14 }
      name           = "3. Suvari Tümeni"
      type           = cavalry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 145 }
      name           = "23. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 20111 id = 146 }
      name           = "252. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 147 }
      name           = "254. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 15 }
    name     = "III. Kolordu"
    location = 1078
    division = {
      id             = { type = 20111 id = 16 }
      name           = "7. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 17 }
      name           = "8. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 18 }
      name           = "9. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 19 }
      name           = "20. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 20 }
    name     = "IV. Kolordu"
    location = 1077
    division = {
      id             = { type = 20111 id = 21 }
      name           = "10. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 22 }
      name           = "11. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 23 }
      name           = "12. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 135 }
      name           = "334. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 20111 id = 136 }
      name           = "358. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 137 }
      name           = "353. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 24 }
    name     = "V. Kolordu"
    location = 1075
    division = {
      id             = { type = 20111 id = 25 }
      name           = "13. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 26 }
      name           = "14. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 27 }
      name           = "15. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 20111 id = 28 }
    name     = "VI. Kolordu"
    location = 1021
    division = {
      id             = { type = 20111 id = 29 }
      name           = "II. Ordu"
      type           = hq
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 20111 id = 30 }
      name           = "17. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 31 }
      name           = "18. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 32 }
      name           = "23. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 33 }
      name           = "41. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 34 }
    name     = "VIII. Kolordu"
    location = 1016
    division = {
      id             = { type = 20111 id = 35 }
      name           = "25. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 36 }
      name           = "26. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 37 }
      name           = "27. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 38 }
      name           = "24. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
    division = {
      id             = { type = 20111 id = 39 }
      name           = "43. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 40 }
    name     = "IX. Kolordu"
    location = 1063
    division = {
      id             = { type = 20111 id = 41 }
      name           = "28. Piyade Tümeni"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 0
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 42 }
      name           = "29. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 43 }
      name           = "1. Suvari Tümeni"
      type           = cavalry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 44 }
    name     = "X. Kolordu"
    location = 1067
    division = {
      id             = { type = 20111 id = 45 }
      name           = "III. Ordu"
      type           = hq
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 20111 id = 46 }
      name           = "30. Piyade Tümeni"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 0
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 47 }
      name           = "31. Piyade Tümeni"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 0
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 48 }
      name           = "32. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 49 }
      name           = "2. Suvari Tümeni"
      type           = cavalry
      model          = 2
      strength       = 35
    }
  }
  landunit = {
    id       = { type = 20111 id = 50 }
    name     = "XI. Kolordu"
    location = 1064
    division = {
      id             = { type = 20111 id = 51 }
      name           = "33. Piyade Tümeni"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 52 }
      name           = "34. Piyade Tümeni"
      type           = infantry
      model          = 2
      extra1         = cavalry_brigade
      extra2         = none
      brigade_model1 = 2
      brigade_model2 = 0
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 53 }
      name           = "44. Piyade Tümeni"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 15
    }
    division = {
      id             = { type = 20111 id = 54 }
      name           = "45. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
    division = {
      id             = { type = 20111 id = 55 }
      name           = "46. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
    division = {
      id             = { type = 20111 id = 56 }
      name           = "50. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 57 }
    name     = "XII. Kolordu"
    location = 1029
    division = {
      id             = { type = 20111 id = 58 }
      name           = "IV. Ordu"
      type           = hq
      model          = 0
      strength       = 50
    }
    division = {
      id             = { type = 20111 id = 59 }
      name           = "35. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 20111 id = 60 }
      name           = "36. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 20111 id = 61 }
    name     = "XIII. Kolordu"
    location = 1034
    division = {
      id             = { type = 20111 id = 62 }
      name           = "37. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 30
    }
    division = {
      id             = { type = 20111 id = 63 }
      name           = "38. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 30
    }
    division = {
      id             = { type = 20111 id = 64 }
      name           = "51. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 20111 id = 65 }
    name     = "VII. Kolordu"
    location = 1049
    division = {
      id             = { type = 20111 id = 66 }
      name           = "21. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 5
    }
    division = {
      id             = { type = 20111 id = 67 }
      name           = "22. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 20111 id = 68 }
    name     = "XIV. Kolordu"
    location = 1050
    division = {
      id             = { type = 20111 id = 69 }
      name           = "39. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
    division = {
      id             = { type = 20111 id = 70 }
      name           = "40. Piyade Tümeni"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 10
    }
  }

  navalunit = {
    id       = { type = 11700 id = 80 }
    name     = "Türkce Deniz Filosu"
    location = 1076
    base     = 1076
    division = {
      id             = { type = 11700 id = 81 }
      name           = "Barbaros Hayreddin"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 11700 id = 82 }
      name           = "Turgut Reis"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 11700 id = 83 }
      name           = "Mesudiye"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 84 }
      name           = "Hamidiye"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 87 }
      name           = "Mecidiye"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 88 }
      name           = "1. Filotilla Torpido Ve Denizalti"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 11700 id = 89 }
      name           = "2. Filotilla Torpido Ve Denizalti"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 11700 id = 90 }
      name           = "3. Filotilla Torpido Ve Denizalti"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 6 }
      name           = "1. Filotilla Denizalti Kücük"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 11700 id = 100 }
      name           = "Reschid Pasha Kücük Filotilla"
      type           = transport
    }
  }
}
