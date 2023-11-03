    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 80;
            section.data(80)  = dumData; %prealloc

                    ;% rtP.Carriercounter_CarrCount
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Carriercounter_CarrCount_nlq1hz21k3
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Carriercounter_CarrCount_f20soq4h5z
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.Carriercounter_CarrCount_ccnd30fhxr
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.Carriercounter_CarrCount_eit53tw5h0
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtP.Carriercounter_Range
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

                    ;% rtP.Carriercounter_Range_dx20pwdeoq
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 6;

                    ;% rtP.Carriercounter_Range_fzuqnnpgab
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 7;

                    ;% rtP.Carriercounter_Range_bgfczok2t5
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 8;

                    ;% rtP.Carriercounter_Range_bwe3drtbjb
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 9;

                    ;% rtP.PWMGenerator_Tdelay
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 10;

                    ;% rtP.PWMGenerator2_Tdelay
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 11;

                    ;% rtP.PWMGenerator3_Tdelay
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 12;

                    ;% rtP.PWMGenerator1_Tdelay
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 13;

                    ;% rtP.PWMGenerator4_Tdelay
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 14;

                    ;% rtP.PWMGenerator_Tper
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 15;

                    ;% rtP.PWMGenerator1_Tper
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 16;

                    ;% rtP.PWMGenerator2_Tper
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 17;

                    ;% rtP.PWMGenerator3_Tper
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 18;

                    ;% rtP.PWMGenerator4_Tper
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 19;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 20;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 21;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_d5dyvthcs4
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 22;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_kos5ps3goc
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 23;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_e15lhmtkyf
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 24;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_gh1nl4mdaz
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 25;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_evbtetgudb
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 26;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_ppemyo5tni
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 27;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_WrappedStateLowerValue_kpvdirr0t4
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 28;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous1_WrappedStateLowerValue_fe1fa5l133
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 29;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 30;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_jbdq2s11ie
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 31;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_m545ryqje2
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 32;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_jpcp5p3x4d
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 33;

                    ;% rtP.IntegratorwithWrappedStateDiscreteorContinuous_x0_nvotyte21j
                    section.data(35).logicalSrcIdx = 34;
                    section.data(35).dtTransOffset = 34;

                    ;% rtP.Constant_Value
                    section.data(36).logicalSrcIdx = 35;
                    section.data(36).dtTransOffset = 35;

                    ;% rtP.Constant_Value_ilyx3sxort
                    section.data(37).logicalSrcIdx = 36;
                    section.data(37).dtTransOffset = 36;

                    ;% rtP.Constant_Value_pa0axfuaby
                    section.data(38).logicalSrcIdx = 37;
                    section.data(38).dtTransOffset = 37;

                    ;% rtP.Constant_Value_dw5lwecznd
                    section.data(39).logicalSrcIdx = 38;
                    section.data(39).dtTransOffset = 38;

                    ;% rtP.Constant_Value_izcbq3klps
                    section.data(40).logicalSrcIdx = 39;
                    section.data(40).dtTransOffset = 39;

                    ;% rtP.D_si_1_Value
                    section.data(41).logicalSrcIdx = 40;
                    section.data(41).dtTransOffset = 40;

                    ;% rtP.Integrator_gainval
                    section.data(42).logicalSrcIdx = 41;
                    section.data(42).dtTransOffset = 41;

                    ;% rtP.Constant2_Value
                    section.data(43).logicalSrcIdx = 42;
                    section.data(43).dtTransOffset = 42;

                    ;% rtP.Integrator_gainval_kxkpn5ktyp
                    section.data(44).logicalSrcIdx = 43;
                    section.data(44).dtTransOffset = 43;

                    ;% rtP.Constant2_Value_csuhh40fsp
                    section.data(45).logicalSrcIdx = 44;
                    section.data(45).dtTransOffset = 44;

                    ;% rtP.Saturation_UpperSat
                    section.data(46).logicalSrcIdx = 45;
                    section.data(46).dtTransOffset = 45;

                    ;% rtP.Saturation_LowerSat
                    section.data(47).logicalSrcIdx = 46;
                    section.data(47).dtTransOffset = 46;

                    ;% rtP.D_si_2_Value
                    section.data(48).logicalSrcIdx = 47;
                    section.data(48).dtTransOffset = 47;

                    ;% rtP.Integrator_gainval_anntwrmt4d
                    section.data(49).logicalSrcIdx = 48;
                    section.data(49).dtTransOffset = 48;

                    ;% rtP.Constant2_Value_lqufvpapq4
                    section.data(50).logicalSrcIdx = 49;
                    section.data(50).dtTransOffset = 49;

                    ;% rtP.Integrator_gainval_prlifqcgec
                    section.data(51).logicalSrcIdx = 50;
                    section.data(51).dtTransOffset = 50;

                    ;% rtP.Constant2_Value_nei4prnbsm
                    section.data(52).logicalSrcIdx = 51;
                    section.data(52).dtTransOffset = 51;

                    ;% rtP.Saturation_UpperSat_agcdx2od5n
                    section.data(53).logicalSrcIdx = 52;
                    section.data(53).dtTransOffset = 52;

                    ;% rtP.Saturation_LowerSat_epadsuqnyb
                    section.data(54).logicalSrcIdx = 53;
                    section.data(54).dtTransOffset = 53;

                    ;% rtP.D_si_3_Value
                    section.data(55).logicalSrcIdx = 54;
                    section.data(55).dtTransOffset = 54;

                    ;% rtP.Integrator_gainval_gsopvokafa
                    section.data(56).logicalSrcIdx = 55;
                    section.data(56).dtTransOffset = 55;

                    ;% rtP.Constant2_Value_j1kboe2g4v
                    section.data(57).logicalSrcIdx = 56;
                    section.data(57).dtTransOffset = 56;

                    ;% rtP.Integrator_gainval_cx0xcinyfp
                    section.data(58).logicalSrcIdx = 57;
                    section.data(58).dtTransOffset = 57;

                    ;% rtP.Constant2_Value_dpgskevhhh
                    section.data(59).logicalSrcIdx = 58;
                    section.data(59).dtTransOffset = 58;

                    ;% rtP.Saturation_UpperSat_ego33qyird
                    section.data(60).logicalSrcIdx = 59;
                    section.data(60).dtTransOffset = 59;

                    ;% rtP.Saturation_LowerSat_mtozl4vgzg
                    section.data(61).logicalSrcIdx = 60;
                    section.data(61).dtTransOffset = 60;

                    ;% rtP.D_main_Value
                    section.data(62).logicalSrcIdx = 61;
                    section.data(62).dtTransOffset = 61;

                    ;% rtP.Integrator_gainval_d3lkwgtuge
                    section.data(63).logicalSrcIdx = 62;
                    section.data(63).dtTransOffset = 62;

                    ;% rtP.Constant2_Value_pp0a1disph
                    section.data(64).logicalSrcIdx = 63;
                    section.data(64).dtTransOffset = 63;

                    ;% rtP.Integrator_gainval_nml42p0n4g
                    section.data(65).logicalSrcIdx = 64;
                    section.data(65).dtTransOffset = 64;

                    ;% rtP.Constant2_Value_bhpllj300z
                    section.data(66).logicalSrcIdx = 65;
                    section.data(66).dtTransOffset = 65;

                    ;% rtP.Saturation_UpperSat_jhcxiltx5i
                    section.data(67).logicalSrcIdx = 66;
                    section.data(67).dtTransOffset = 66;

                    ;% rtP.Saturation_LowerSat_bbdrzw2qys
                    section.data(68).logicalSrcIdx = 67;
                    section.data(68).dtTransOffset = 67;

                    ;% rtP.D_main_n_Value
                    section.data(69).logicalSrcIdx = 68;
                    section.data(69).dtTransOffset = 68;

                    ;% rtP.Integrator_gainval_n0efa4a30f
                    section.data(70).logicalSrcIdx = 69;
                    section.data(70).dtTransOffset = 69;

                    ;% rtP.Constant2_Value_ljwuaakgzo
                    section.data(71).logicalSrcIdx = 70;
                    section.data(71).dtTransOffset = 70;

                    ;% rtP.Integrator_gainval_p5ziwxx5xx
                    section.data(72).logicalSrcIdx = 71;
                    section.data(72).dtTransOffset = 71;

                    ;% rtP.Constant2_Value_gkqlrgad1a
                    section.data(73).logicalSrcIdx = 72;
                    section.data(73).dtTransOffset = 72;

                    ;% rtP.Saturation_UpperSat_mmn4rnyigj
                    section.data(74).logicalSrcIdx = 73;
                    section.data(74).dtTransOffset = 73;

                    ;% rtP.Saturation_LowerSat_om1ea1f4fz
                    section.data(75).logicalSrcIdx = 74;
                    section.data(75).dtTransOffset = 74;

                    ;% rtP.Constant3_Value
                    section.data(76).logicalSrcIdx = 75;
                    section.data(76).dtTransOffset = 75;

                    ;% rtP.Constant3_Value_fdh0kfnkgz
                    section.data(77).logicalSrcIdx = 76;
                    section.data(77).dtTransOffset = 76;

                    ;% rtP.Constant3_Value_llyskhg1wi
                    section.data(78).logicalSrcIdx = 77;
                    section.data(78).dtTransOffset = 77;

                    ;% rtP.Constant3_Value_ca3jt2mcxg
                    section.data(79).logicalSrcIdx = 78;
                    section.data(79).dtTransOffset = 78;

                    ;% rtP.Constant3_Value_frwqtx1sbd
                    section.data(80).logicalSrcIdx = 79;
                    section.data(80).dtTransOffset = 79;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 30;
            section.data(30)  = dumData; %prealloc

                    ;% rtB.bmq2skyotc
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.i2avetyytp
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 2;

                    ;% rtB.fdxn01rvgf
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% rtB.nfa1ieecfm
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% rtB.asx0ks2d0l
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% rtB.py2r1itzbv
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

                    ;% rtB.d211xmj4vx
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 11;

                    ;% rtB.pphouwueuk
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 12;

                    ;% rtB.nk1uhmwt1n
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 13;

                    ;% rtB.ayrqcrieud
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 14;

                    ;% rtB.ifhiyhymxq
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 18;

                    ;% rtB.n3xiag5iab
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 20;

                    ;% rtB.lre4klrgga
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 21;

                    ;% rtB.ewmd2wegga
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 22;

                    ;% rtB.iqp23wcjzt
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 23;

                    ;% rtB.kjohml0ydc
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 27;

                    ;% rtB.epdqxd20p3
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 29;

                    ;% rtB.azaujt5rtq
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 30;

                    ;% rtB.fxh4udczur
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 31;

                    ;% rtB.bv5i3f3rgt
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 32;

                    ;% rtB.eo3uatez0a
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 36;

                    ;% rtB.age5edt333
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 38;

                    ;% rtB.nkoasgdd2e
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 39;

                    ;% rtB.kvpig12tyn
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 40;

                    ;% rtB.h1hb0r4ct0
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 41;

                    ;% rtB.of5izgd2nh
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 45;

                    ;% rtB.es5wnta2ki
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 69;

                    ;% rtB.hylm1rbfel
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 72;

                    ;% rtB.ge2sp0a0ty
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 73;

                    ;% rtB.nootlevufh
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 74;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 4;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtDW.oojuyjmsnj
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gzqgja0x1h
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.k2dqyad4ny
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.alcascjxvj
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% rtDW.i0ag2pecni
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% rtDW.kwgopg2t3n
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% rtDW.gafqzlu0w1
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 8;

                    ;% rtDW.d1silreffk
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 9;

                    ;% rtDW.fmszeehxmh
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 10;

                    ;% rtDW.ap2c33xwtr
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 12;

                    ;% rtDW.dwdhz1iyjs
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 13;

                    ;% rtDW.jv2z4afd5d
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 14;

                    ;% rtDW.mt4f5rcj2x
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 16;

                    ;% rtDW.afez0twrop
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 17;

                    ;% rtDW.iyo3z45joh
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 18;

                    ;% rtDW.macvu5ceax
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 20;

                    ;% rtDW.hoab3tltb1
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 35;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 22;
            section.data(22)  = dumData; %prealloc

                    ;% rtDW.c2jutzvux0
                    section.data(1).logicalSrcIdx = 17;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.bpkv1n1asy
                    section.data(2).logicalSrcIdx = 18;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mcx5zjqfsd
                    section.data(3).logicalSrcIdx = 19;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.gtnniq0pkj
                    section.data(4).logicalSrcIdx = 20;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.kwy52cji5n
                    section.data(5).logicalSrcIdx = 21;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.lhuj0bctl5
                    section.data(6).logicalSrcIdx = 22;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.nbapp4ueof
                    section.data(7).logicalSrcIdx = 23;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.coyvz3lfin
                    section.data(8).logicalSrcIdx = 24;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.autxzinyto
                    section.data(9).logicalSrcIdx = 25;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.ezxkpcegs1
                    section.data(10).logicalSrcIdx = 26;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.idoc0kafzc.LoggedData
                    section.data(11).logicalSrcIdx = 27;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.mj5scnghd3.AQHandles
                    section.data(12).logicalSrcIdx = 28;
                    section.data(12).dtTransOffset = 16;

                    ;% rtDW.dekwg20dqc.AQHandles
                    section.data(13).logicalSrcIdx = 29;
                    section.data(13).dtTransOffset = 17;

                    ;% rtDW.it2e5qe3ze.AQHandles
                    section.data(14).logicalSrcIdx = 30;
                    section.data(14).dtTransOffset = 18;

                    ;% rtDW.ox2n2i01ug.LoggedData
                    section.data(15).logicalSrcIdx = 31;
                    section.data(15).dtTransOffset = 19;

                    ;% rtDW.fmlixiproz.AQHandles
                    section.data(16).logicalSrcIdx = 32;
                    section.data(16).dtTransOffset = 24;

                    ;% rtDW.mgiuugcto4.AQHandles
                    section.data(17).logicalSrcIdx = 33;
                    section.data(17).dtTransOffset = 25;

                    ;% rtDW.hbz3b5xqf1.AQHandles
                    section.data(18).logicalSrcIdx = 34;
                    section.data(18).dtTransOffset = 26;

                    ;% rtDW.gcjzyzozu4.AQHandles
                    section.data(19).logicalSrcIdx = 35;
                    section.data(19).dtTransOffset = 27;

                    ;% rtDW.jgabfuqjst.AQHandles
                    section.data(20).logicalSrcIdx = 36;
                    section.data(20).dtTransOffset = 28;

                    ;% rtDW.ggqfpuivzp.AQHandles
                    section.data(21).logicalSrcIdx = 37;
                    section.data(21).dtTransOffset = 29;

                    ;% rtDW.ji20xszv05.AQHandles
                    section.data(22).logicalSrcIdx = 38;
                    section.data(22).dtTransOffset = 30;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 2;
            section.data(2)  = dumData; %prealloc

                    ;% rtDW.du34yopqjb
                    section.data(1).logicalSrcIdx = 39;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.mj13pzrwqe
                    section.data(2).logicalSrcIdx = 40;
                    section.data(2).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 12;
            section.data(12)  = dumData; %prealloc

                    ;% rtDW.mnf1ndoeql
                    section.data(1).logicalSrcIdx = 41;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.ebqjvgm4dm
                    section.data(2).logicalSrcIdx = 42;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.j2jti0zyzr
                    section.data(3).logicalSrcIdx = 43;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.oavruknmhk
                    section.data(4).logicalSrcIdx = 44;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.kqp0y3lfdl
                    section.data(5).logicalSrcIdx = 45;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.pbkl0kvbgr
                    section.data(6).logicalSrcIdx = 46;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.kznqm03ejv
                    section.data(7).logicalSrcIdx = 47;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.amkaphy2rl
                    section.data(8).logicalSrcIdx = 48;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.frofzd5eub
                    section.data(9).logicalSrcIdx = 49;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.nklfvnrvwt
                    section.data(10).logicalSrcIdx = 50;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.hxb4cv0j4z
                    section.data(11).logicalSrcIdx = 51;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.ccab25k2ww
                    section.data(12).logicalSrcIdx = 52;
                    section.data(12).dtTransOffset = 11;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 723267604;
    targMap.checksum1 = 1866956771;
    targMap.checksum2 = 2882686808;
    targMap.checksum3 = 2799266740;

