pipeline {
    agent any

    stages {
     
        stage('Build') {
            steps {
                sh '''
                mkdir build
                cd build
                cmake ../
                cmake --build .
                '''
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
