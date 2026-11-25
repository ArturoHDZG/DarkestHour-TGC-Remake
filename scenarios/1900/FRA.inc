##############################
# Country definition for FRA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = FRA
  ai                 = "Majors/FRA/FRA_1914.ai"
  ai_settings        = { }
  capital            = 55 # Paris
  manpower           = 13
  # Resource Reserves
  energy         = 7140
  metal          = 3570
  rare_materials = 1785
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 400
  escorts        = 60

  diplomacy = {
    relation = { tag = U08 value = -175 }
    relation = { tag = U09 value = -150 }
    relation = { tag = ITA value = -50 }
    relation = { tag = OTT value = -75 }
    relation = { tag = RUS value = 150 }
    relation = { tag = ENG value = 100 }
    relation = { tag = CAN value = 100 }
    relation = { tag = NZL value = 100 }
    relation = { tag = SAF value = 100 }
    relation = { tag = SER value = 75 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BHU value = 50 }
    relation = { tag = ETH value = 25 }
    relation = { tag = GRE value = 20 }
    relation = { tag = LUX value = 120 }
    relation = { tag = NEP value = 50 }
    relation = { tag = OMN value = 70 }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAU value = 10 }
    relation = { tag = SCH value = 50 }
    relation = { tag = USA value = 65 }
    relation = { tag = YEM value = 100 }
    relation = { tag = LBY value = -100 }
  }
  SpyInfo                = { country = "FRA" NumberOfSpies = 9 }

  nationalprovinces      = { 85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68 62 65 66 54 63 105 107 104 100 52 51 49 59 50 99 45 55 60 61 37 38 39 57 58 42 43 44 47 72 73 93 48 95 64 91 83 88 106 96 97 76 98 103 92 102 53 46 41 56 101 }
  ownedprovinces         = { 85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68 62 65 66 54 63 100 52 51 49 59 50 99 45 55 60 61 37 38 39 57 58 42 43 44 47 72 73 93 2000 1767 1768 724 726 725 721 717 718 722 738 731 734 735 732 736 733 727 744 737 728 729 741 740 742 745 746 747 748 749 833 981 982 943 944 942 984 985 974 978 980 966 965 975 971 972 973 976 959 957 949 951 967 960 962 922 920 923 926 914 915 907 1001 1002 996 98 1586 1585 1584 1583 1582 1581 92 48 95 64 91 83 88 106 96 97 1003 917 918 927 921 946 947 945 958 961 968 970 977 983 986 720 723 730 743 719 999 1000 1740 1743 1744 1730 1752 2135 103 739 76 102 53 46 41 56 101 }
  controlledprovinces    = { 85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68 62 65 66 54 63 100 52 51 49 59 50 99 45 55 60 61 37 38 39 57 58 42 43 44 47 72 73 93 2000 1767 1768 724 726 725 721 717 718 722 738 731 734 735 732 736 733 727 744 737 728 729 741 740 742 745 746 747 748 749 833 981 982 943 944 942 984 985 974 978 980 966 965 975 971 972 973 976 959 957 949 951 967 960 962 922 920 923 926 914 915 907 1001 1002 996 98 1586 1585 1584 1583 1582 1581 92 76 48 95 64 91 83 88 106 96 97 1003 917 918 927 921 946 947 945 958 961 968 970 977 983 986 720 723 730 743 999 1000 719 1740 1743 1744 1730 1752 2135 103 739 102 53 46 41 56 101 }
  claimedprovinces       = { 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 743 740 741 742 744 745 746 747 748 749 907 914 915 917 918 920 921 922 923 926 927 942 943 944 945 946 947 949 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 833 1001 1002 1003 996 999 1000 2000 1752 1767 1768 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 2135 }

  techapps               = { 1010 1020 1160 1170 3010 3110 3210 3220 3410 3420 3610 3720 3810 5310 5800 6500 6510 8010 8020 8050 8060 8070 8100 8500 13060 13070 }
  blueprints             = { 6340 6640 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 9
    political_left    = 7
    freedom           = 10
    free_market       = 10
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 5307 } # Raymond Poincaré
  headofgovernment       = { type = 9 id = 5292 } # René Viviani
  foreignminister        = { type = 9 id = 5271 } # René Viviani
  armamentminister       = { type = 9 id = 5322 } # Joseph Noullens
  ministerofsecurity     = { type = 9 id = 5343 } # Louis Malvy
  ministerofintelligence = { type = 9 id = 5299 } # Georges Ladoux
  chiefofstaff           = { type = 9 id = 5247 } # Emile Belin
  chiefofarmy            = { type = 9 id = 5235 } # Joseph Joffre
  chiefofnavy            = { type = 9 id = 5373 } # Louis Pivet
  chiefofair             = { type = 9 id = 5374 } # Auguste Edouard Hirschauer

    landunit = {
    id       = { type = 10000 id = 1 }
    name     = "Corps d'armée colonial"
    location = 55
    division = {
      id             = { type = 10000 id = 4 }
      name           = "3ème Division d'infanterie coloniale"
      type           = infantry
      model          = 1
      strength       = 75
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 5 }
    name     = "Gouvernement militaire de Paris"
    location = 55
    division = {
      id             = { type = 10000 id = 6 }
      name           = "Grand Quartier Général"
      type           = hq
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 9 }
      name           = "1ère Division de Cavalerie"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }

  
    landunit = {
    id       = { type = 10000 id = 26 }
    name     = "IVème Corps d'Armée"
    location = 58
    division = {
      id             = { type = 10000 id = 27 }
      name           = "7ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
    division = {
      id             = { type = 10000 id = 28 }
      name           = "8ème Division d'Infanterie"
      type           = infantry
      model          = 2
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 31 }
    name     = "Vème Corps d'Armée"
    location = 66
    division = {
      id             = { type = 10000 id = 32 }
      name           = "9ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 35 }
    name     = "VIème Corps d'Armée"
    location = 100
    division = {
      id             = { type = 10000 id = 36 }
      name           = "IVème Armée"
      type           = hq
      model          = 0
      strength       = 65
    }
    division = {
      id             = { type = 10000 id = 39 }
      name           = "42ème Division d'Infanterie"
      type           = infantry
      model          = 2
      strength       = 75
    }
    division = {
      id             = { type = 10000 id = 40 }
      name           = "4ème Division de Cavalerie"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 10000 id = 41 }
      name           = "5ème Division de Cavalerie"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }

    landunit = {
    id       = { type = 10000 id = 43 }
    name     = "VIIème Corps d'Armée"
    location = 97
    division = {
      id             = { type = 10000 id = 44 }
      name           = "Ière Armée"
      type           = hq
      model          = 0
      strength       = 65
      experience     = 10
    }
    division = {
      id             = { type = 10000 id = 45 }
      name           = "14ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 48 }
    name     = "VIIIème Corps d'Armée"
    location = 65
    division = {
      id             = { type = 10000 id = 49 }
      name           = "15ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 53 }
    name     = "IXème Corps d'Armée"
    location = 61
    division = {
      id             = { type = 10000 id = 54 }
      name           = "17ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 60 }
    name     = "Xème Corps d'Armée"
    location = 38
    division = {
      id             = { type = 10000 id = 61 }
      name           = "19ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
      experience     = 5
    }
    division = {
      id             = { type = 10000 id = 62 }
      name           = "20ème Division d'Infanterie"
      type           = infantry
      model          = 2
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 64 }
    name     = "XIème Corps d'Armée"
    location = 57
    division = {
      id             = { type = 10000 id = 65 }
      name           = "21ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 71 }
    name     = "XIIème Corps d'Armée"
    location = 73
    division = {
      id             = { type = 10000 id = 72 }
      name           = "23ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 77 }
    name     = "XIIIème Corps d'Armée"
    location = 71
    division = {
      id             = { type = 10000 id = 78 }
      name           = "25ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 81 }
    name     = "XIVème Corps d'Armée"
    location = 85
    division = {
      id             = { type = 10000 id = 82 }
      name           = "27ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 87 }
    name     = "XVème Corps d'Armée"
    location = 89
    division = {
      id             = { type = 10000 id = 88 }
      name           = "29ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 92 }
    name     = "XVIème Corps d'Armée"
    location = 82
    division = {
      id             = { type = 10000 id = 93 }
      name           = "31ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 97 }
    name     = "XVIIème Corps d'Armée"
    location = 77
    division = {
      id             = { type = 10000 id = 98 }
      name           = "33ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
    division = {
      id             = { type = 10000 id = 99 }
      name           = "34ème Division d'Infanterie"
      type           = infantry
      model          = 2
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 102 }
    name     = "XVIIIème Corps d'Armée"
    location = 68
    division = {
      id             = { type = 10000 id = 103 }
      name           = "35ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
    division = {
      id             = { type = 10000 id = 104 }
      name           = "36ème Division d'Infanterie"
      type           = infantry
      model          = 2
      strength       = 75
    }
  }

    landunit = {
    id       = { type = 10000 id = 107 }
    name     = "XXème Corps d'Armée"
    location = 106
    division = {
      id             = { type = 10000 id = 108 }
      name           = "IIème Armée"
      type           = hq
      model          = 0
      strength       = 65
    }
    division = {
      id             = { type = 10000 id = 110 }
      name           = "39ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      strength       = 75
    }
    division = {
      id             = { type = 10000 id = 111 }
      name           = "2ème Division de Cavalerie"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }

    landunit = {
    id       = { type = 10000 id = 114 }
    name     = "XXIème Corps d'Armée"
    location = 96
    division = {
      id             = { type = 10000 id = 115 }
      name           = "IIIème Armée"
      type           = hq
      model          = 0
      strength       = 65
    }
    division = {
      id             = { type = 10000 id = 116 }
      name           = "13ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
    division = {
      id             = { type = 10000 id = 117 }
      name           = "43ème Division d'Infanterie"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 75
    }
  }

  
  
  
  
    landunit = {
    id       = { type = 10000 id = 156 }
    name     = "Division d'Alger"
    location = 727
    division = {
      id             = { type = 10000 id = 157 }
      name           = "Division d'Alger"
      type           = garrison
      model          = 1
      strength       = 60
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 158 }
    name     = "Division d'Oran"
    location = 728
    division = {
      id             = { type = 10000 id = 159 }
      name           = "Division d'Oran"
      type           = garrison
      model          = 1
      strength       = 60
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 155 }
    name     = "Division de Constantine"
    location = 734
    division = {
      id             = { type = 10000 id = 1123 }
      name           = "Division de Constantine"
      type           = garrison
      model          = 1
      strength       = 60
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 1124 }
    name     = "Division d'occupation de Tunisie"
    location = 747
    division = {
      id             = { type = 10000 id = 125 }
      name           = "Division d'occupation de Tunisie"
      type           = garrison
      model          = 1
      strength       = 90
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 160 }
    name     = "Division du Maroc occidental"
    location = 718
    division = {
      id             = { type = 10000 id = 127 }
      name           = "Division du Maroc occidental"
      type           = garrison
      model          = 1
      strength       = 100
      experience     = 10
    }
  }

    landunit = {
    id       = { type = 10000 id = 161 }
    name     = "Division du Maroc oriental"
    location = 724
    division = {
      id             = { type = 10000 id = 128 }
      name           = "Division du Maroc oriental"
      type           = garrison
      model          = 1
      strength       = 100
      experience     = 10
    }
  }

    landunit = {
    id       = { type = 10000 id = 126 }
    name     = "Corps d'occupation du Maroc"
    location = 717
    division = {
      id             = { type = 10000 id = 129 }
      name           = "Troupes auxiliaires marocaines"
      type           = militia
      model          = 1
      strength       = 50
      experience     = 10
    }
    division = {
      id             = { type = 10000 id = 130 }
      name           = "Goumiers"
      type           = militia
      model          = 1
      strength       = 30
      experience     = 10
    }
  }

    landunit = {
    id       = { type = 10000 id = 131 }
    name     = "Groupe de l'Afrique orientale"
    location = 1001
    division = {
      id             = { type = 10000 id = 132 }
      name           = "1er Régiment de tirailleurs malgaches"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
      experience     = 5
    }
    division = {
      id             = { type = 10000 id = 133 }
      name           = "2ème Régiment de tirailleurs malgaches"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
      experience     = 5
    }
    division = {
      id             = { type = 10000 id = 134 }
      name           = "3ème Régiment de tirailleurs malgaches"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
    }
  }

    landunit = {
    id       = { type = 10000 id = 135 }
    name     = "1er Régiment de tirailleurs sénégalais"
    location = 983
    division = {
      id             = { type = 10000 id = 136 }
      name           = "1er Régiment de tirailleurs sénégalais"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 163 }
    name     = "2ème Régiment de tirailleurs sénégalais"
    location = 975
    division = {
      id             = { type = 10000 id = 137 }
      name           = "2ème Régiment de tirailleurs sénégalais"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 164 }
    name     = "3ème Régiment de tirailleurs sénégalais"
    location = 962
    division = {
      id             = { type = 10000 id = 138 }
      name           = "3ème Régiment de tirailleurs sénégalais"
      type           = militia
      model          = 1
      strength       = 30
      max_strength   = 40
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 165 }
    name     = "4ème Régiment de tirailleurs sénégalais"
    location = 978
    division = {
      id             = { type = 10000 id = 166 }
      name           = "4ème Régiment de tirailleurs sénégalais"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 139 }
    name     = "Régiment indigène du Tchad"
    location = 920
    division = {
      id             = { type = 10000 id = 140 }
      name           = "Régiment indigène du Tchad"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
      experience     = 5
    }
  }

    landunit = {
    id       = { type = 10000 id = 141 }
    name     = "Groupe de l'Afrique équatoriale"
    location = 915
    division = {
      id             = { type = 10000 id = 142 }
      name           = "Régiment indigène du Gabon"
      type           = militia
      model          = 1
      strength       = 40
      max_strength   = 40
      experience     = 5
    }
  }

  

  navalunit = {
    id       = { type = 10000 id = 500 }
    name     = "1ère Flotte"
    location = 86
    base     = 86
    {
      id             = { type = 10000 id = 501 }
      name           = "Courbet"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10000 id = 502 }
      name           = "Jean Bart"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 503 }
      name           = "Danton"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 504 }
      name           = "Mirabeau"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 505 }
      name           = "Diderot"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 506 }
      name           = "Condorcet"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 507 }
      name           = "Vergniaud"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 508 }
      name           = "Voltaire"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 509 }
      name           = "Démocratie"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 510 }
      name           = "Justice"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 511 }
      name           = "Verité"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 512 }
      name           = "Republique"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 513 }
      name           = "Patrie"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 514 }
      name           = "Suffren"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 515 }
      name           = "Bouvet"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 516 }
      name           = "Gaulois"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 517 }
      name           = "Charlemagne"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 518 }
      name           = "St Louis"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 519 }
      name           = "Carnot"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 520 }
      name           = "Jauréguiberry"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 521 }
      name           = "Charles Martel"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 522 }
      name           = "Massena"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 523 }
      name           = "Foudre"
      type           = escort_carrier
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 524 }
      name           = "Waldeck Rousseau"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 525 }
      name           = "Edgar Quinet"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 526 }
      name           = "Ernest Renan"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 527 }
      name           = "Leon Gambetta"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 528 }
      name           = "Jules Ferry"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 529 }
      name           = "Victor Hugo"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 530 }
      name           = "Jules Michelet"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 531 }
      name           = "D'Entrecasteaux"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 532 }
      name           = "Pothuau"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 533 }
      name           = "Bruix"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 534 }
      name           = "Latouche Treville"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 535 }
      name           = "Chateaurenault"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 536 }
      name           = "Jurien de la Graviere"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 537 }
      name           = "1ère Escadrille de Torpilleurs"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10000 id = 538 }
      name           = "2ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10000 id = 539 }
      name           = "3ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 540 }
      name           = "4ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 613 }
      name           = "16ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 614 }
      name           = "17ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 615 }
      name           = "18ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 609 }
      name           = "19ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 610 }
      name           = "20ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 541 }
    name     = "2ème Flotte Légére"
    location = 43
    base     = 43
    division = {
      id             = { type = 10000 id = 542 }
      name           = "Marseillaise"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 543 }
      name           = "Amiral Aube"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 544 }
      name           = "Condé"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 545 }
      name           = "Gloire"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 546 }
      name           = "Desaix"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 547 }
      name           = "Kleber"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 548 }
      name           = "Jeanne d'Arc"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 549 }
      name           = "Gueydon"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 550 }
      name           = "Dupetit Thouars"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 551 }
      name           = "Lavoisier"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 552 }
      name           = "D'Estrées"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 553 }
      name           = "Forbin"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 554 }
      name           = "Surcouf"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 555 }
      name           = "Guichen"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 556 }
      name           = "5ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10000 id = 557 }
      name           = "5ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10000 id = 558 }
      name           = "6ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 559 }
      name           = "7ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 611 }
      name           = "21ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 612 }
      name           = "22ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 560 }
    name     = "Defense Mobile"
    location = 49
    base     = 49
    division = {
      id             = { type = 10000 id = 561 }
      name           = "8ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 562 }
      name           = "9ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 619 }
      name           = "10ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 620 }
      name           = "11ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 563 }
    name     = "Defense Speciale"
    location = 717
    base     = 717
    division = {
      id             = { type = 10000 id = 564 }
      name           = "Henri IV"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 565 }
      name           = "Amiral Charner"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 566 }
      name           = "Cassard"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 567 }
      name           = "Du Chayla"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 568 }
      name           = "Cosmao"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 621 }
      name           = "12ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 616 }
      name           = "13ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 569 }
    name     = "Defense Orientale"
    location = 1399
    base     = 1399
    division = {
      id             = { type = 10000 id = 570 }
      name           = "Dupleix"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 617 }
      name           = "14ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10000 id = 571 }
    name     = "Defense des Indes de l'Ouest"
    location = 1768
    base     = 1768
    division = {
      id             = { type = 10000 id = 572 }
      name           = "Descartes"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 573 }
    name     = "Defense du Pacifique de Sud"
    location = 1748
    base     = 1748
    division = {
      id             = { type = 10000 id = 574 }
      name           = "Montcalm"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10000 id = 618 }
      name           = "15ème Escadrille de Torpilleurs"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10000 id = 575 }
    name     = "1ère Flottille de Sous-Marins"
    location = 43
    base     = 43
    division = {
      id             = { type = 10000 id = 576 }
      name           = "1ère Escadrille de Sous-Marins"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 577 }
    name     = "2ème Flottille de Sous-Marins"
    location = 49
    base     = 49
    division = {
      id             = { type = 10000 id = 578 }
      name           = "2ème Escadrille de Sous-Marins"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 579 }
    name     = "3ème Flottille de Sous-Marins"
    location = 86
    base     = 86
    division = {
      id             = { type = 10000 id = 580 }
      name           = "3ème Escadrille de Sous-Marins"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 581 }
      name           = "4ème Escadrille de Sous-Marins"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 582 }
    name     = "Transports Généraux"
    location = 68
    base     = 68
    division = {
      id             = { type = 10000 id = 583 }
      name           = "1ère Flottille de Transport"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 584 }
      name           = "2ème Flottille de Transport"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 585 }
      name           = "3ème Flottille de Transport"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10000 id = 586 }
    name     = "Transport Expéditionnaire"
    location = 727
    base     = 727
    division = {
      id             = { type = 10000 id = 587 }
      name           = "4ème Flottille de Transport"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 588 }
      name           = "5ème Flottille de Transport"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10000 id = 589 }
      name           = "6ème Flottille de Transport"
      type           = transport
      model          = 0
    }
  }

      
  {
    id             = { type = 10000 id = 590 }
    name           = "Paris"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1914 month = august day = 1 }
  }
  {
    id             = { type = 10000 id = 591 }
    name           = "France"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1914 month = july day = 15 }
  }
  {
    id             = { type = 10000 id = 592 }
    name           = "Bretagne"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1915 month = september day = 1 }
  }
  {
    id             = { type = 10000 id = 593 }
    name           = "Provence"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1915 month = june day = 1 }
  }
  {
    id             = { type = 10000 id = 594 }
    name           = "Lorraine"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1916 month = july day = 27 }
  }
}
