##############################
# Country definition for ITA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ITA
  ai                 = "Majors/ITA/ITA_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
  capital            = 419 # Rome
  dissent            = 3
  manpower           = 13
  # Resource Reserves
  energy         = 3180
  metal          = 1590
  rare_materials = 795
  oil            = 500
  supplies       = 2000
  money          = 50
  transports     = 400
  escorts        = 100

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = {
      tag        = ALB
      value      = 10
      access     = yes
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = ARG value = 30 }
    relation = { tag = AST value = 1 }
    relation = { tag = U09 value = -30 }
    relation = { tag = BEL value = -5 }
    relation = { tag = BHU value = 1 }
    relation = { tag = BUL value = 100 }
    relation = { tag = CAN value = 1 }
    relation = { tag = CHL value = 30 }
    relation = { tag = ENG value = -15 }
    relation = { tag = ETH value = -200 }
    relation = { tag = FRA value = -15 }
    relation = { tag = U08 value = 50 }
    relation = {
      tag        = GRE
      value      = -35
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = HOL value = 10 }
    relation = { tag = NEP value = 1 }
    relation = { tag = NZL value = 1 }
    relation = { tag = OMN value = 50 }
    relation = { tag = POR value = 65 }
    relation = {
      tag        = ROM
      value      = 50
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = SAF value = 1 }
    relation = { tag = SAU value = -25 }
    relation = {
      tag        = SCH
      value      = 1
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = SPR value = -50 }
    relation = {
      tag        = OTT
      value      = 1
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = YEM value = 50 }
    relation = { tag = SER value = 75 }
    relation = { tag = USA value = 90 }
    relation = { tag = RUS value = 15 }
  }
  SpyInfo                = { country = "ITA" NumberOfSpies = 9 }

  nationalprovinces      = { 87 343 350 393 394 395 396 398 399 400 401 402 403 404 405 406 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 }
  ownedprovinces         = { 378 379 393 394 395 396 398 399 400 405 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 755 756 757 758 759 761 762 763 764 765 767 768 771 776 815 816 817 834 835 836 837 }
  controlledprovinces    = { 378 379 393 394 395 396 398 399 400 405 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 750 751 752 753 755 756 757 758 759 761 762 763 764 765 767 768 771 815 816 817 834 835 836 837 }
  claimedprovinces       = { 832 833 740 741 742 744 745 746 747 748 749 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 815 816 817 836 837 91 94 429 371 822 823 820 825 829 830 819 821 818 828 831 826 827 824 834 835 378 379 }

  techapps               = { 1010 1020 1030 1040 13060 13070 13080 1160 1170 1180 1830 1910 1920 2860 2290 3010 3020 3030 3110 3120 3210 3220 3230 3410 3420 3430 3440 3450 3610 3620 3810 3720 3730 3736 4500 4510 4600 4610 4740 5310 5600 5700 5800 5080 5810 6500 6510 6530 6580 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8500 8510 8550 8900 8910 27480 27490 27500 27510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 3
    free_market       = 7
    professional_army = 4
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 25501 } # Vittorio Emanuele III
  headofgovernment       = { type = 9 id = 25511 } # Antonio Salandra
  foreignminister        = { type = 9 id = 25531 } # Antonino Paternò-Castello
  armamentminister       = { type = 9 id = 25562 } # Domenico Grandi
  ministerofsecurity     = { type = 9 id = 25582 } # Antonio Salandra
  ministerofintelligence = { type = 9 id = 25604 } # Rosolino Poggi
  chiefofstaff           = { type = 9 id = 25611 } # Luigi Cadorna
  chiefofarmy            = { type = 9 id = 25621 } # Luigi Cadorna
  chiefofnavy            = { type = 9 id = 25631 } # Paolo Thaon di Revel
  chiefofair             = { type = 9 id = 25641 } # Maurizio Moris

  landunit = {
    id       = { type = 23500 id = 1 }
    name     = "Regio Esercito"
    location = 419
    leader   = 25532
    division = {
      id             = { type = 23500 id = 2 }
      name           = "Alto Comando"
      type           = hq
      model          = 0
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 4 }
    name     = "Ispettorato delle Truppe da Montagna"
    location = 394
    leader   = 25609
    division = {
      id             = { type = 23500 id = 5 }
      name           = "1. Raggruppamento Alpini"
      type           = bergsjaeger
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 6 }
      name           = "2. Raggruppamento Alpini"
      type           = bergsjaeger
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 9 }
    name     = "Ispettorato di Cavalleria"
    location = 393
    leader   = 25677
    division = {
      id             = { type = 23500 id = 10 }
      name           = "1a Divisione di Cavalleria"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 11 }
      name           = "2a Divisione di Cavalleria"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 12 }
      name           = "3a Divisione di Cavalleria"
      type           = cavalry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 13 }
      name           = "4a Divisione di Cavalleria"
      type           = cavalry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 14 }
    name     = "I Corpo d'Armata"
    location = 398
    leader   = 25640
    division = {
      id             = { type = 23500 id = 15 }
      name           = "1a Divisione di Linea"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 16 }
      name           = "2a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 61 }
      name           = "26a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 17 }
    name     = "II Corpo d'Armata"
    location = 399
    leader   = 25642
    division = {
      id             = { type = 23500 id = 18 }
      name           = "3a Divisione di Linea"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 19 }
      name           = "4a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 62 }
      name           = "27a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 21 }
    name     = "III Corpo d'Armata"
    location = 407
    leader   = 25533
    division = {
      id             = { type = 23500 id = 23 }
      name           = "5a Divisione di Linea"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 24 }
      name           = "6a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 66 }
      name           = "28a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 26 }
    name     = "IV Corpo d'Armata"
    location = 396
    leader   = 25622
    division = {
      id             = { type = 23500 id = 28 }
      name           = "7a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 29 }
      name           = "8a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 67 }
      name           = "29a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 31 }
    name     = "V Corpo d'Armata"
    location = 400
    leader   = 25505
    division = {
      id             = { type = 23500 id = 33 }
      name           = "9a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 34 }
      name           = "10a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 63 }
      name           = "30a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 36 }
    name     = "VI Corpo d'Armata"
    location = 411
    leader   = 25648
    division = {
      id             = { type = 23500 id = 38 }
      name           = "11a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 39 }
      name           = "12a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 40 }
    name     = "VII Corpo d'Armata"
    location = 412
    leader   = 25583
    division = {
      id             = { type = 23500 id = 41 }
      name           = "13a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 42 }
      name           = "14a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 20 }
      name           = "32a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 43 }
    name     = "VIII Corpo d'Armata"
    location = 410
    leader   = 25528
    division = {
      id             = { type = 23500 id = 44 }
      name           = "15a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 45 }
      name           = "16a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 30 }
      name           = "33a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 46 }
    name     = "IX Corpo d'Armata"
    location = 419
    leader   = 25608
    division = {
      id             = { type = 23500 id = 47 }
      name           = "17a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 48 }
      name           = "18a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 35 }
      name           = "34a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 49 }
    name     = "X Corpo d'Armata"
    location = 421
    leader   = 25594
    division = {
      id             = { type = 23500 id = 50 }
      name           = "19a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 51 }
      name           = "20a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 25 }
      name           = "35a Divisione Territoriale"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 52 }
    name     = "XI Corpo d'Armata"
    location = 426
    leader   = 25548
    division = {
      id             = { type = 23500 id = 53 }
      name           = "21a Divisione di Linea"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 54 }
      name           = "22a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 55 }
    name     = "XII Corpo d'Armata"
    location = 430
    leader   = 25662
    division = {
      id             = { type = 23500 id = 56 }
      name           = "23a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 23500 id = 57 }
      name           = "24a Divisione di Linea"
      type           = infantry
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 23500 id = 58 }
    name     = "XIII Corpo d'Armata"
    location = 434
    leader   = 25680
    division = {
      id             = { type = 23500 id = 59 }
      name           = "25a Divisione Territoriale"
      type           = infantry
      model          = 2
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 23500 id = 68 }
    name     = "Regio Corpo Truppe Coloniali della Somalia"
    location = 836
    leader   = 25504
    division = {
      id             = { type = 23500 id = 69 }
      name           = "Truppe Coloniali della Somalia"
      type           = militia
      model          = 1
      strength       = 20
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 23500 id = 70 }
    name     = "Regio Corpo Truppe Coloniali dell'Eritrea"
    location = 815
    division = {
      id             = { type = 23500 id = 71 }
      name           = "Truppe Coloniali dell'Eritrea"
      type           = militia
      model          = 1
      strength       = 100
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 23500 id = 73 }
    name     = "Regio Corpo Truppe Coloniali della Tripolitania"
    location = 750
    leader   = 25668
    division = {
      id             = { type = 23500 id = 74 }
      name           = "Truppe Coloniali della Tripolitania"
      type           = militia
      model          = 1
      strength       = 50
      experience     = 5
      locked         = yes
    }
    division = {
      id             = { type = 23500 id = 75 }
      name           = "Cacciatori d'Africa"
      type           = infantry
      model          = 1
      strength       = 30
      experience     = 5
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 23500 id = 77 }
    name     = "Regio Corpo Truppe Coloniali della Cirenaica"
    location = 761
    leader   = 25506
    division = {
      id             = { type = 23500 id = 78 }
      name           = "Truppe Coloniali della Cirenaica"
      type           = militia
      model          = 1
      strength       = 50
      experience     = 5
      locked         = yes
    }
  }

  navalunit = {
    id       = { type = 23500 id = 500 }
    name     = "1a Squadra Navale"
    location = 422
    base     = 422
    leader   = 25828
    division = {
      id             = { type = 23500 id = 501 }
      name           = "RN Giulio Cesare"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 502 }
      name           = "RN Leonardo da Vinci"
      type           = battleship
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 503 }
      name           = "RN Dante Alighieri"
      type           = battleship
      model          = 2
      extra1         = floatplane
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 504 }
      name           = "RN Regina Elena"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 505 }
      name           = "RN Vittorio Emanuele"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 506 }
      name           = "RN Napoli"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 507 }
      name           = "RN Roma"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 508 }
      name           = "RN San Giorgio"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 509 }
      name           = "RN San Marco"
      type           = heavy_cruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 510 }
      name           = "RN Pisa"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 511 }
      name           = "RN Amalfi"
      type           = heavy_cruiser
      model          = 2
      extra1         = floatplane
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 512 }
      name           = "RN Piemonte"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 513 }
      name           = "2a Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 514 }
      name           = "5a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 515 }
    name     = "2a Squadra Navale"
    location = 426
    base     = 426
    leader   = 25835
    division = {
      id             = { type = 23500 id = 516 }
      name           = "RN Benedetto Brin"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 517 }
      name           = "RN Regina Margherita"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 518 }
      name           = "RN Giuseppe Garibaldi"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 519 }
      name           = "RN Varese"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 520 }
      name           = "RN Francesco Ferruccio"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 521 }
      name           = "RN Vettor Pisani"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 522 }
      name           = "RN Nino Bixio"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 523 }
      name           = "RN Quarto"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 525 }
      name           = "RN Libia"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 524 }
      name           = "RN Agordat"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 527 }
      name           = "RN Puglia"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 528 }
      name           = "RN Elba"
      type           = light_cruiser
      model          = 0
      extra1         = floatplane
      brigade_model1 = 0
    }
    division = {
      id             = { type = 23500 id = 529 }
      name           = "RN Lombardia"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 530 }
      name           = "1a Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 23500 id = 531 }
      name           = "5a Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 532 }
      name           = "2a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 533 }
      name           = "4a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 534 }
      name           = "8a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 571 }
    name     = "Flottiglia Sommergibili Brindisi"
    location = 426
    base     = 426
    leader   = 25849
    division = {
      id             = { type = 23500 id = 535 }
      name           = "3a Squadriglia Sommergibili"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 536 }
      name           = "4a Squadriglia Sommergibili"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 537 }
    name     = "Base di Venezia"
    location = 400
    base     = 400
    leader   = 25834
    division = {
      id             = { type = 23500 id = 538 }
      name           = "RN Emanuele Filiberto"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 539 }
      name           = "RN Ammiraglio di Saint Bon"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 540 }
      name           = "RN Sardegna"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 541 }
      name           = "RN Carlo Alberto"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 543 }
      name           = "RN Etruria"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 544 }
      name           = "3a Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 545 }
      name           = "4a Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 546 }
      name           = "5a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 547 }
      name           = "6a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 548 }
      name           = "9a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 549 }
      name           = "10a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 550 }
      name           = "11a Squadriglia Torpediniere"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 572 }
    name     = "Flottiglia Sommergibili Venezia"
    location = 400
    base     = 400
    leader   = 25853
    division = {
      id             = { type = 23500 id = 551 }
      name           = "1a Squadriglia Sommergibili"
      type           = submarine
      model          = 1
    }
    division = {
      id             = { type = 23500 id = 552 }
      name           = "2a Squadriglia Sommergibili"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 553 }
    name     = "Base di Ancona"
    location = 412
    base     = 412
    division = {
      id             = { type = 23500 id = 555 }
      name           = "RN Enrico Dandolo"
      type           = battleship
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 557 }
    name     = "Dipartimento di Taranto"
    location = 422
    base     = 422
    leader   = 25812
    division = {
      id             = { type = 23500 id = 558 }
      name           = "RN Coatit"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 559 }
      name           = "7a Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 23500 id = 560 }
    name     = "Squadra di Libia"
    location = 750
    base     = 750
    division = {
      id             = { type = 23500 id = 561 }
      name           = "RN Giovanni Bausan"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 562 }
      name           = "RN Etna"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 526 }
      name           = "RN Liguria"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 563 }
      name           = "6a Squadriglia Cacciatorpediniere"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 23500 id = 564 }
    name     = "Squadra d'Eritrea"
    location = 815
    base     = 815
    division = {
      id             = { type = 23500 id = 565 }
      name           = "RN Calabria"
      type           = light_cruiser
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 566 }
    name     = "Squadra Trasporti"
    location = 422
    base     = 422
    division = {
      id             = { type = 23500 id = 567 }
      name           = "1a Flottiglia Trasporti"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 568 }
      name           = "2a Flottiglia Trasporti"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 569 }
      name           = "3a Flottiglia Trasporti"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 23500 id = 570 }
      name           = "4a Flottiglia Trasporti"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 23500 id = 573 }
    name     = "Divisione Navale in Estremo Oriente"
    location = 1338
    base     = 400
    division = {
      id             = { type = 23500 id = 542 }
      name           = "RN Marco Polo"
      type           = heavy_cruiser
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 23500 id = 600 }
    name     = "Corpo Aeronautico"
    location = 400
    base     = 400
    leader   = 25929
    division = {
      id             = { type = 23500 id = 601 }
      name           = "1a Squadriglia"
      type           = tactical_bomber
      model          = 1
      strength       = 25
    }
  }

  division_development = {
    id             = { type = 23500 id = 580 }
    name           = "RN Conte di Cavour"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = april day = 6 }
  }
  division_development = {
    id             = { type = 23500 id = 581 }
    name           = "RN Caio Duilio"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = may day = 10 }
  }
  division_development = {
    id             = { type = 23500 id = 582 }
    name           = "RN Andrea Doria"
    type           = battleship
    model          = 2
    cost           = 0.4
    date           = { year = 1915 month = october day = 13 }
  }
  division_development = {
    id             = { type = 23500 id = 583 }
    name           = "RN Marsala"
    type           = light_cruiser
    model          = 1
    cost           = 0.2
    date           = { year = 1914 month = august day = 4 }
  }
}
